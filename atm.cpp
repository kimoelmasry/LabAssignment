#include "atm.h"
#include "ui_atm.h"
#include "history.h"
#include "history.cpp"
#

ATM::ATM(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ATM)
{
    transactionsArr = new QString[10];
    ui->setupUi(this);
}

ATM::~ATM()
{
    transactionsArr = new QString[10];
    delete ui;
}


void ATM::on_ClearB_clicked()
{
    ui->lineEdit->clear();
}


void ATM::on_DepositButton_clicked()
{

    *(transactionsArr+transactionsCount)="Deposit"+ui->lineEdit->text();
    transactionsCount++;
    amountdeposit= ui->lineEdit->text().toInt();

    currentbalance=ui->emanacc->text().toInt()+amountdeposit;
    ui->emanacc->setText(QString::number(currentbalance));



}


void ATM::on_WithdrawB_clicked()
{

    transactionsArr[transactionsCount]="Withdraw" + (ui->lineEdit->text());
    transactionsCount++;
    amountwithdrawn=ui->lineEdit->text().toInt();
     currentbalance=ui->emanacc->text().toInt()-amountwithdrawn;
     ui->emanacc->setText(QString::number(currentbalance));

}


void ATM::on_ViewTransB_clicked()
{
    History h(*transactionsArr,transactionsCount);
    h.setModal(true);
    h.exec();

}

