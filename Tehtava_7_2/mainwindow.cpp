#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QList<QPushButton*> numButtons = {ui->N0, ui->N1, ui->N2, ui->N3, ui->N4, ui->N5, ui->N6, ui->N7, ui->N8, ui->N9};
    for(QPushButton* button : numButtons)
    {
        connect(button, &QPushButton::clicked, this, &MainWindow::numberClickHandler);
    }

    connect(ui->sum, &QPushButton::clicked, this, &MainWindow::operationClickHandler);
    connect(ui->sub, &QPushButton::clicked, this, &MainWindow::operationClickHandler);
    connect(ui->mul, &QPushButton::clicked, this, &MainWindow::operationClickHandler);
    connect(ui->div, &QPushButton::clicked, this, &MainWindow::operationClickHandler);

    connect(ui->clear, &QPushButton::clicked, this, &MainWindow::clearClickHandler);
    connect(ui->enter, &QPushButton::clicked, this, &MainWindow::enterClickHandler);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickHandler()
{
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    if(!button) return;

    if(state == 1)
    {
        number1 += button->text();
        ui->num1->setText(number1);
    }
    else if(state == 2)
    {
        number2 += button->text();
        ui->num2->setText(number2);
    }
    qDebug() << "Number 1: " << number1 << ", Number 2: " << number2;
}

void MainWindow::operationClickHandler()
{
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    if(!button) return;

    if(button == ui->sum)
    {
        operand = 0;
        ui->operation->setText("+");
    }
    else if(button == ui->sub)
    {
        operand = 1;
        ui->operation->setText("-");

    }
    else if(button == ui->mul)
    {
        operand = 2;
        ui->operation->setText("*");

    }
    else if(button == ui->div)
    {
        operand = 3;
        ui->operation->setText("/");
    }

    state = 2;

    if(!number1.isEmpty())
    {
        state = 2;
    }
}

void MainWindow::clearClickHandler()
{
    number1.clear();
    number2.clear();
    state = 1;
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
}

void MainWindow::enterClickHandler()
{
    if (number1.isEmpty() || number2.isEmpty()) return;

    float num1Float = number1.toFloat();
    float num2Float = number2.toFloat();
    float res = 0.0;

    switch(operand)
    {
    case 0: res = num1Float + num2Float; break;
    case 1: res = num1Float - num2Float; break;
    case 2: res = num1Float * num2Float; break;
    case 3:
        if (num2Float != 0) res = num1Float / num2Float;
        else
        {
            ui->result->setText("Error, can not divide by 0");
            return;
        }
        break;
    }
    ui->result->setText(QString::number(res));
}
