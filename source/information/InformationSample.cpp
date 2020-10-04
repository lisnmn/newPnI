#include "InformationSample.h"

InformationSample::InformationSample() {
    mIniFile.SetIntValue(mSectionName, "PETScanTime", 0);    //pet扫描持续时间
    mIniFile.SetIntValue(mSectionName, "PETBedNum", 1);  //pet床位数
    mIniFile.SetIntValue(mSectionName, "PETFrameNum", 1);    //pet帧数
    mIniFile.SetIntValue(mSectionName, "PETInterval", 1);    //pet间隔时间
    
    mIniFile.SetIntValue(mSectionName, "CTScanMode", 0); //ct扫描模式
    mIniFile.SetIntValue(mSectionName, "CTBedNum",0);
    
    mIniFile.SetStringValue(mSectionName, "savePath", "data");   //(待定?）原始文件的路径
    
    mIniFile.SetStringValue(mSectionName, "PETSavePath", "");    //pet采集存储路径
    mIniFile.SetStringValue(mSectionName, "CTSavePath", ""); //ct采集存储路径
    
    mIniFile.SetStringValue(mSectionName, "sampleModalityType", "PET");
    mIniFile.SetStringValue(mSectionName, "tracerName", "");
    mIniFile.SetStringValue(mSectionName, "deviceType", "");    
}

inifile::IniFile& InformationSample::getIniFile() {
    return mIniFile;
}

std::string& InformationSample::getSectionName() {
    return mSectionName;
}
