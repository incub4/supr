#ifndef PREPROCESSOR_H
#define PREPROCESSOR_H

#include <QDialog>

namespace Ui {
class preprocessor;
}

class preprocessor : public QDialog
{
    Q_OBJECT

public:
    explicit preprocessor(QWidget *parent = 0);
    ~preprocessor();

private:
    Ui::preprocessor *ui;
     int line;

public slots:
    void addline();
    void deliteline();
};

#endif // PREPROCESSOR_H
