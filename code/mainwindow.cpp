#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->plus_pushbutton, SIGNAL (clicked()), this, SLOT (slotPlusClicked()));
    connect(ui->minus_pushbutton, SIGNAL (clicked()), this, SLOT (slotMinusClicked()));
    connect(ui->times_pushbutton, SIGNAL (clicked()), this, SLOT (slotTimesClicked()));
    connect(ui->divide_pushbutton, SIGNAL (clicked()), this, SLOT (slotDivideClicked()));
}

void MainWindow::slotPlusClicked()
{
    int first_value, second_value, result;
    first_value = ui->firstv_lineEdit->text().toInt();
    second_value = ui->secondv_lineEdit->text().toInt();
    result = first_value + second_value;
    ui->result_lineEdit->setText(QString::number(result));
}

void MainWindow::slotMinusClicked()
{
    int first_value, second_value, result;
    first_value = ui->firstv_lineEdit->text().toInt();
    second_value = ui->secondv_lineEdit->text().toInt();
    result = first_value - second_value;
    ui->result_lineEdit->setText(QString::number(result));

}

void MainWindow::slotTimesClicked()
{
    int first_value, second_value, result;
    first_value = ui->firstv_lineEdit->text().toInt();
    second_value = ui->secondv_lineEdit->text().toInt();
    result = first_value * second_value;
    ui->result_lineEdit->setText(QString::number(result));
}

void MainWindow::slotDivideClicked()
{
    int first_value, second_value, result;
    first_value = ui->firstv_lineEdit->text().toInt();
    second_value = ui->secondv_lineEdit->text().toInt();
    if (second_value == 0)
    {
        QMessageBox::warning(this, "Error", "You can't divide by zero...");
        return;
    }
    result = first_value / second_value;
    ui->result_lineEdit->setText(QString::number(result));
}

MainWindow::~MainWindow()
{
    delete ui;
}
