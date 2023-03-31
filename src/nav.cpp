//
// Created by sourena khanzadeh on 2023-03-31.
//

#include "nav.hpp"

nav::nav(QWidget *parent) : QWidget(parent) {
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    setMinimumHeight(50);
    setMaximumHeight(50);

    QLabel *label = new QLabel(this);
    label->setText(getDateString());
    label->setGeometry(10, 10, 0, 0);

    QIcon icon;
    icon.addFile("res/cpu.png", QSize(), QIcon::Normal, QIcon::Off);

    QPushButton *button = new QPushButton(this);
    button->setIcon(icon);
    button->setIconSize(QSize(30, 30));
    button->setFlat(true);

    QHBoxLayout *layout = new QHBoxLayout(this);
    // make the layout take up the whole window horizontally
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(0);
    layout->addWidget(label, 1, Qt::AlignLeft);
    layout->addWidget(button, 1, Qt::AlignRight);

    setLayout(layout);
    resize(500, 50);

}

QString nav::getDateString() {
    QCalendar *calendar = new QCalendar(QCalendar::System::Gregorian);
    QDate date = QDate::currentDate();
    QLocale locale(QLocale::English, QLocale::Canada);
    QString monthName = calendar->monthName(locale, date.month());
    QString dayName = calendar->weekDayName(locale, date.dayOfWeek());
    QString dateText = dayName + ", " + monthName + " " + QString::number(date.day()) + ", " + QString::number(date.year());
    return dateText;
}

nav::~nav() = default;