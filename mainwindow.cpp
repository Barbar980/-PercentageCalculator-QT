#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    left=0;
    right=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Calculate1_clicked()
{
    left = ui->Field1->text().toDouble(); // Writing variable to field, and change text digit
    right = ui->Field1_2->text().toDouble(); // Writing variable to field, and change text digit
    ui->Score1->setText(QString::number((left*right)/100)); // calculating
}


void MainWindow::on_Calculate2_clicked()
{

    left = ui->Field2->text().toDouble(); // Writing variable to field, and change text digit
    right = ui->Field2_1->text().toDouble(); // Writing variable to field, and change text digit
    ui->Score2->setText(QString::number((left*100)/right));
}



void MainWindow::on_Calculate3_clicked()
{
    left = ui->Field3->text().toDouble(); // Writing variable to field, and change text digit
    right = ui->Field3_1->text().toDouble(); // Writing variable to field, and change text digit
    ui->Score3->setText(QString::number(right/left*100-100)); // calculating
    ui->Score3->setText(ui->Score3->text().append("%")); //add % symbol to the end
}

void MainWindow::on_Calculate4_clicked()
{
    left = ui->Field4->text().toDouble();
    right = ui->Field4_1->text().toDouble();
    ui->Score4->setText(QString::number(left+left/100*right));

}


void MainWindow::on_Calculate5_clicked()
{
    left = ui->Field5->text().toDouble();
    right = ui->Field5_1->text().toDouble();
    ui->ScoreX->setText(QString::number(left-left/100*right));
}
