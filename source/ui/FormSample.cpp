#include "FormSample.h"
#include "ui_FormSample.h"

#include <iostream>

FormSample::FormSample(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormSample)
{
    ui->setupUi(this);
}

FormSample::~FormSample()
{
    delete ui;
}

void FormSample::on_pushButton_start_clicked()
{
    InformationSample& infoSample = Information::getInstance()->getInfoSample();
    inifile::IniFile& iniFile = infoSample.getIniFile();
    std::string& sectionName = infoSample.getSectionName();
    iniFile.SetStringValue(sectionName, "sampleModalityType", ui->comboBox_modality->currentText().toStdString());
    iniFile.SetStringValue(sectionName, "tracerName", ui->comboBox_tracer->currentText().toStdString());
    // for PET
    iniFile.SetIntValue(sectionName, "PETScanTime", ui->spinBox_scanTime->value());
    iniFile.SetIntValue(sectionName, "PETBedNum", ui->spinBox_bedNumber->value());
    iniFile.SetIntValue(sectionName, "PETFrameNum", ui->spinBox_frameNumber->value());
    iniFile.SetIntValue(sectionName, "PETInterval", ui->spinBox_interval->value());
    
}
