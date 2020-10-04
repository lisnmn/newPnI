#include "Information.h"

Information* Information::mpSingleton = nullptr;
std::mutex Information::mtx;
Information::GC Information::GC::gc;  // 在程序结束时自动垃圾回收

Information *Information::getInstance() {
    std::lock_guard<std::mutex> lock(mtx);
    if(mpSingleton == nullptr) {
        mpSingleton = new Information();
    }
    return mpSingleton;
}

void Information::destroyInstance() {
    if(mpSingleton != nullptr) {
        delete mpSingleton;
        mpSingleton = nullptr;
    }
}

InformationSample& Information::getInfoSample() {
    return mInfoSample;
}


