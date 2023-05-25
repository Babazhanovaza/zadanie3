#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<QString("ФИО")<<QString("Оценка ТК")<<QString("Оценка РК")<<QString("Оценка ИК")<<QString("Рейтинг"));


    ui->tableWidget->setItem(0, 0, new QTableWidgetItem("Бабажанов А."));
    ui->tableWidget->setItem(1, 0, new QTableWidgetItem("Аматов Ф."));
    ui->tableWidget->setItem(2, 0, new QTableWidgetItem("Джаналиев И."));
    ui->tableWidget->setItem(3, 0, new QTableWidgetItem("Алмакаев М."));

    ui->tableWidget->setItem(0, 1, new QTableWidgetItem("5"));
    ui->tableWidget->setItem(1, 1, new QTableWidgetItem("5"));
    ui->tableWidget->setItem(2, 1, new QTableWidgetItem("5"));
    ui->tableWidget->setItem(3, 1, new QTableWidgetItem("4"));

    ui->tableWidget->setItem(0, 2, new QTableWidgetItem("5"));
    ui->tableWidget->setItem(1, 2, new QTableWidgetItem("5"));
    ui->tableWidget->setItem(2, 2, new QTableWidgetItem("4"));
    ui->tableWidget->setItem(3, 2, new QTableWidgetItem("5"));

    ui->tableWidget->setItem(0, 3, new QTableWidgetItem("5"));
    ui->tableWidget->setItem(1, 3, new QTableWidgetItem("5"));
    ui->tableWidget->setItem(2, 3, new QTableWidgetItem("5"));
    ui->tableWidget->setItem(3, 3, new QTableWidgetItem("5"));

    ui->tableWidget->setItem(0, 4, new QTableWidgetItem("5"));
    ui->tableWidget->setItem(1, 4, new QTableWidgetItem("5"));
    ui->tableWidget->setItem(2, 4, new QTableWidgetItem("5"));
    ui->tableWidget->setItem(3, 4, new QTableWidgetItem("5"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

