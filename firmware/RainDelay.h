#include "application.h"

class RainDelay {
    public:
        RainDelay(uint32_t duration);
        RainDelay(uint32_t duration, bool process);
    
    private:
        void go(uint32_t duration, bool process);
};
