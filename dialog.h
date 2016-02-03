#ifndef DIALOG_H
#define DIALOG_H

#include "preprocessor.h"
#include <QDialog>
#include <QLayoutItem>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

public slots:
   void newmenu();

private:
    Ui::Dialog *ui;
    preprocessor *pr = new preprocessor;
    void clean();
};

#endif // DIALOG_H
