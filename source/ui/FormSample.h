#ifndef FORMSAMPLE_H
#define FORMSAMPLE_H

#include <QWidget>

#include "source/information/Information.h"
#include "source/midware/MidwareSample.h"

namespace Ui {
class FormSample;
}

class FormSample : public QWidget
{
    Q_OBJECT
    
public:
    explicit FormSample(QWidget *parent = nullptr);
    ~FormSample();
    
private slots:
    void on_pushButton_start_clicked();
    
private:
    Ui::FormSample *ui;
    MidwareSample mMidwareSample;
};

#endif // FORMSAMPLE_H
