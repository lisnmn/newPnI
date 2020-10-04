#ifndef INFORMATION_H
#define INFORMATION_H

#include <mutex>

#include "InformationSample.h"

class Information {
public:
    ~Information() = default;
    static Information* getInstance();
    static void destroyInstance();
    
    InformationSample& getInfoSample();
    
private:
    Information() = default;
    static Information* mpSingleton;
    static std::mutex mtx;
    class GC {
    public:
        ~GC() { destroyInstance(); }
        static GC gc;
    };
    
    InformationSample mInfoSample;
};

#endif // INFORMATION_H
