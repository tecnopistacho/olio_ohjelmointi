#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setText(QString::number(count));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_countButton_clicked()
{
    count++;
    ui->lineEdit->setText(QString::number(count));
}

void MainWindow::on_resetButton_clicked()
{
    count = 0;
    ui->lineEdit->setText(QString::number(count));
}

