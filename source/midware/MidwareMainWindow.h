#ifndef MIDWAREMAINWINDOW_H
#define MIDWAREMAINWINDOW_H

#include <QBoxLayout>

#include <unordered_map>

#include "source/ui/FormSample.h"

class MidwareMainWindow : QObject {
    Q_OBJECT
public:
    MidwareMainWindow();
    ~MidwareMainWindow();
    void initMidware(QBoxLayout* layout);
    void showSubForm(const std::string& name);
    
private:
    void initForms();
    
    QBoxLayout* mpSubFormInterface;
    std::unordered_map<std::string, QWidget*> mMapName2Form;
    std::string mCurrentForm;
    FormSample mFormSample;
};

#endif // MIDWAREMAINWINDOW_H
