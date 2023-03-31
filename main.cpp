//
// Created by sourena khanzadeh on 2023-03-31.
//

#include <QApplication>
#include <QLabel>
#include <widgets.hpp>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    widgets w;
    w.show();
    w.setMinimumHeight(500);
    w.setMinimumWidth(500);
    return app.exec();
}