#include "MidwareMainWindow.h"

#include <iostream>
#include <QDebug>

MidwareMainWindow::MidwareMainWindow() {
}

MidwareMainWindow::~MidwareMainWindow() {
    mpSubFormInterface = nullptr;
}

void MidwareMainWindow::initMidware(QBoxLayout* layout) {
    mpSubFormInterface = layout;
    mCurrentForm = "";
    initForms();
}

void MidwareMainWindow::initForms() {
    mMapName2Form["Sample"] = &mFormSample;
    for(auto& item : mMapName2Form) {
        mpSubFormInterface->addWidget(item.second);
        item.second->setVisible(false);
    }
    
}

void MidwareMainWindow::showSubForm(const std::string& name) {
    if(mMapName2Form.find(name) == mMapName2Form.end()) {
        std::cout << "Cannot find sub Form " << name << std::endl;
        return;
    }
    if(mCurrentForm.compare("")) {
        mMapName2Form[mCurrentForm]->setVisible(false);
    }
    
    mMapName2Form[name]->setVisible(true);
    mCurrentForm = name;
}
