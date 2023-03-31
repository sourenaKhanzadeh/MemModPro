//
// Created by sourena khanzadeh on 2023-03-31.
//

#include <QLayout>
#include "nav.hpp"

nav::nav(QWidget *parent) : QWidget(parent) {
    QLabel *label = new QLabel(this);
    QCalendar *calendar = new QCalendar(QCalendar::System::Gregorian);
    QDate date = QDate::currentDate();
    QLocale locale(QLocale::English, QLocale::Canada);
    QString monthName = calendar->monthName(locale, date.month());
    QString dayName = calendar->weekDayName(locale, date.dayOfWeek());
    QString dateText = dayName + ", " + monthName + " " + QString::number(date.day()) + ", " + QString::number(date.year());
    label->setText(dateText);
    label->setGeometry(10, 10, 0, 0);

    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->addWidget(label);

    setLayout(layout);


}

nav::~nav() = default;