//
// Created by sourena khanzadeh on 2023-03-31.
//

#include "widgets.hpp"

widgets::widgets(QWidget *parent) : QWidget(parent) {
    nav *n = new nav(this);
    n->show();
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(n, 1);

    setLayout(layout);

}

widgets::~widgets() = default;
