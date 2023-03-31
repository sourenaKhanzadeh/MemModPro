//
// Created by sourena khanzadeh on 2023-03-31.
//

#include "widgets.hpp"

widgets::widgets(QWidget *parent) : QWidget(parent) {
    nav *n = new nav(this);
    n->show();
    setContentsMargins(0, 0, 0, 0);
}

widgets::~widgets() = default;
