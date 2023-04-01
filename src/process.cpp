//
// Created by sourena khanzadeh on 2023-04-01.
//

#include "process.hpp"

process::process(QWidget *parent) {
    setWindowIcon(QIcon("res/cpu.png"));
    setFixedSize(300, 500);
    setWindowTitle("Process");

    QString command = "ps -A";
    QProcess process;
    process.setProcessChannelMode(QProcess::MergedChannels);
    process.startCommand(command);
    process.waitForFinished();
    QByteArray output = process.readAllStandardOutput();
    QString outputString(output);

    QStringList lines = outputString.split("\n");

    QScrollArea *scrollArea = new QScrollArea(this);
    scrollArea->setWidgetResizable(true);

    QWidget *scrollWidget = new QWidget(scrollArea);
    QVBoxLayout *scrollLayout = new QVBoxLayout(scrollWidget);

    for (int i = 1; i < lines.size(); i++) {
        QStringList parts = lines[i].simplified().split(" ");
        if(parts.size() < 4) continue;
        QString pid = parts[0];
        QString name = parts[3];
        QLabel *label = new QLabel(scrollWidget);
        label->setText(pid + " " + name);
        label->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        label->setWordWrap(true);
        scrollLayout->addWidget(label);
    }

    scrollWidget->setLayout(scrollLayout);
    scrollArea->setWidget(scrollWidget);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(scrollArea);

}

process::~process() = default;
