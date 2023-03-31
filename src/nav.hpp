//
// Created by sourena khanzadeh on 2023-03-31.
//

#ifndef MEMMODPRO_NAV_HPP
#define MEMMODPRO_NAV_HPP

#include <QWidget>
#include <QLabel>
#include <QCalendar>
#include <QDateTime>


class nav: public QWidget {
Q_OBJECT
public:
    nav(QWidget *parent = nullptr);
    ~nav();
};


#endif //MEMMODPRO_NAV_HPP
