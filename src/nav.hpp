//
// Created by sourena khanzadeh on 2023-03-31.
//

#ifndef MEMMODPRO_NAV_HPP
#define MEMMODPRO_NAV_HPP

#include <QWidget>
#include <QLabel>
#include <QCalendar>
#include <QDateTime>
#include <QLayout>
#include <QPushButton>


class nav: public QWidget {
Q_OBJECT
public:
    explicit nav(QWidget *parent = nullptr);
    ~nav() override;

private:
    QString getDateString();

    void processButtonClicked();
};


#endif //MEMMODPRO_NAV_HPP
