//
// Created by sourena khanzadeh on 2023-03-31.
//

#include "widgets.hpp"

widgets::widgets(QWidget *parent) : QWidget(parent) {
    QLabel *label = new QLabel("Hello World", this);
    label->show();
}

widgets::~widgets() = default;
