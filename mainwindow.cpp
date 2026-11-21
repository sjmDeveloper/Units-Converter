#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "unit.h"
#include <QMessageBox>
// that fix mm to mm and upd
void MainWindow::update_input()
{
    ui->first_unit->clear();
    ui->first_unit->addItems(Units[ui->Value_type->currentText()].keys());
}

void MainWindow::update_output()
{

    ui->result_unit->clear();
    ui->result_unit->addItems(Units[ui->Value_type->currentText()].keys());
    ui->result_unit->removeItem(ui->first_unit->currentIndex());
}
// update anithing

void MainWindow::on_Value_type_currentIndexChanged(int){update_input();update_output();};
void MainWindow::on_first_unit_currentIndexChanged(int){update_output();}
//that constractor
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //setup mainwindow.ui
    ui->setupUi(this);
    //
    ui->Value_type->addItems(Units.keys());
    update_input();
    update_output();

}

MainWindow::~MainWindow()
{
    delete ui;
}

//set clicked effect
#include <iostream>

void MainWindow::on_transfer_clicked()
{
    //set unit
    //set a variable if it true respone a message box
    bool hasInputError;
    const auto& units_by_type =Units[ui->Value_type->currentText()];
    const auto input_value =  units_by_type[ui->first_unit->currentText()];
    const auto output_value =  units_by_type[ui->result_unit->currentText()];
    //set result
    number result = ui->input->text().toDouble(&hasInputError);
    result = result * (input_value/output_value);
    //set Error phrase
    if(!hasInputError) QMessageBox::critical(this,"invalidInput","Error");
    ui->result->setText(QString::number(result));
}