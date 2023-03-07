#include "history.h"
#include "ui_history.h"

History::History(QString trans,int count,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::History)
{
    ui->setupUi(this);
    for(int i=0;i<count;i++)
    {
        ui->textEdit->append(trans[i]);

    }
ui->textEdit->setReadOnly(true);
}

History::~History()
{
    delete ui;
}
