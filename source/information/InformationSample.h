#ifndef INFORMATIONSAMPLE_H
#define INFORMATIONSAMPLE_H

#include "source/util/inifile.h"

class InformationSample {
public:
    InformationSample();
    
    inifile::IniFile& getIniFile();
    
    std::string& getSectionName();
    
private:
    inifile::IniFile mIniFile;
    std::string mSectionName = "information";
};

#endif // INFORMATIONSAMPLE_H
