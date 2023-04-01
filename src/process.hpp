//
// Created by sourena khanzadeh on 2023-04-01.
//

#ifndef MEMMODPRO_PROCESS_HPP
#define MEMMODPRO_PROCESS_HPP

#include <QWidget>
#include <QProcess>
#include <QDir>
#include <QLabel>
#include <QLayout>
#include <QScrollBar>
#include <QScrollArea>


class process: public QWidget {
Q_OBJECT
public:
    explicit process(QWidget *parent = nullptr);
    ~process() override;

private:


};


#endif //MEMMODPRO_PROCESS_HPP
