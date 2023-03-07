#ifndef HISTORY_H
#define HISTORY_H

#include <QDialog>

namespace Ui {
class History;
}

class History : public QDialog
{
    Q_OBJECT

public:
    explicit History(QString transacc,int acc,QWidget *parent = nullptr);
    ~History();

private:
    Ui::History *ui;
};

#endif // HISTORY_H
