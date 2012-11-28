#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->playersTable->setColumnCount(3);
    ui->playersTable->setHorizontalHeaderItem(0, new QTableWidgetItem("Name"));
    ui->playersTable->setHorizontalHeaderItem(1, new QTableWidgetItem("Surname"));
    ui->playersTable->setHorizontalHeaderItem(2, new QTableWidgetItem("Age"));
}

MainWindow::~MainWindow()
{
    delete ui;
}
 qint32 countPlayers = 0;

 void MainWindow::on_pushButton_clicked()
{
     ++countPlayers;
    QTableWidgetItem *itName = new QTableWidgetItem(ui->name->text());
    QTableWidgetItem *itSurName = new QTableWidgetItem(ui->Surname->text());
    QTableWidgetItem *itAge = new QTableWidgetItem(ui->Age->text());

    ui->playersTable->setRowCount(countPlayers);
    ui->playersTable->setItem(countPlayers-1,0,itName);
    ui->playersTable->setItem(countPlayers-1,1,itSurName);
    ui->playersTable->setItem(countPlayers-1,2,itAge);

}

void MainWindow::on_dial_actionTriggered(int action)
{
   QString s = QString::number(action);
    ui->label->setText(s);
}
