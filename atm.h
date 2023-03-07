#ifndef ATM_H
#define ATM_H

#include <QMainWindow>
#include "history.h"
QT_BEGIN_NAMESPACE
namespace Ui { class ATM; }
QT_END_NAMESPACE

class ATM : public QMainWindow
{
    Q_OBJECT

public:


    ATM(QWidget *parent = nullptr);
    ~ATM();

private slots:
    void on_ClearB_clicked();

    void on_DepositButton_clicked();

    void on_WithdrawB_clicked();

    void on_ViewTransB_clicked();

private:
    Ui::ATM *ui;
      QString * transactionsArr;
    int transactionsCount=0;
    int currentbalance=0;
    QString bal;
    int amountwithdrawn;
    int amountdeposit;
    QString addbalance;


};

#endif // ATM_H
