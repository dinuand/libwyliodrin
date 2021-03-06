#ifndef __TIMER_H__
#define __TIMER_H__
#include <sys/time.h>

class Timer
{
    public:
        Timer(unsigned int Delay, void (*pToFunction)(Timer* timer));
        ~Timer();
        bool Probe();
        void Start() { isActive=true;}
        void Stop() { isActive=false;}
        bool IsActive() { return isActive; }
        void SetDelay(unsigned int Delay) { itsDelay=Delay; }
    protected:
    private:
        unsigned int itsDelay;
        bool isActive;
        timeval itsStart;
        void (*itspToFunction)(Timer*);
};

#endif /* __TIMER_H__ */
