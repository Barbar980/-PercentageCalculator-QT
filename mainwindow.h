#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Calculate1_clicked();

    void on_Calculate2_clicked();

    void on_Calculate3_clicked();

    void on_Calculate4_clicked();

    void on_Calculate5_clicked();

private:
    Ui::MainWindow *ui;

    double left=0;
    double right=0;
};

class Obliczenia
{

public:
    double x=0;
    double y=0;
};


#endif // MAINWINDOW_H
