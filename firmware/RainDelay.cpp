#include "RainDelay.h"

RainDelay::RainDelay(uint32_t duration) {
    RainDelay::go(duration, true);
}

RainDelay::RainDelay(uint32_t duration, bool process) {
    RainDelay::go(duration, process);
}

void RainDelay::go(uint32_t duration, bool process) {
    uint32_t begin = millis();
    
    RGB.control(true);
    
    while(true) {
        RGB.color(255, 0, 0);
        delay(50);
        RGB.color(0, 255, 0);
        delay(50);
        RGB.color(0, 0, 255);
        delay(50);
        
        if(millis()>(begin+duration))
            break;
        
        if(process==true)
            Spark.process();
    }
    
    RGB.control(false);
}
