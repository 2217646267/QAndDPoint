#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setCheckable(true);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_toggled(bool checked)
{
    qDebug() <<"-----"<< checked;
}


void MainWindow::on_pushButton_pressed()
{
    qDebug() <<"-----";
}


void MainWindow::on_pushButton_clicked()
{
    qDebug() <<"-----on_pushButton_clicked";
}

