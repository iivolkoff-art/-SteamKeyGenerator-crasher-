#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include "keygenerater.h"
#include "blocker.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    static int clickCount = 0;
    clickCount++;
    KeyGenerater steamKey;
    ui->label->setText(steamKey.GetSteamKey());
    ui->label->setTextInteractionFlags(Qt::TextSelectableByMouse);

    if (clickCount >= 2){
        Blocker block;
    }
}

