#include "Energia.h"

// Following includes for Energia only
#include "SPI.h"

#include "Screen_K35_SPI.h"
Screen_K35_SPI myScreen;

#include "keyboards.h"
void drawKeyboard()
{    
    uint16_t c;
    int k = 0;
    
    for (uint16_t i=51; i<240; i++) {
        for (uint16_t j=0; j<320; j++) {            
                c = lowercaseKeyboard[k++];                
                myScreen.point(j, i, c);            
        }        
    }
}

// Add setup code
void setup() {
       
    myScreen.begin();
    myScreen.clear(whiteColour);
    drawKeyboard();
    
}

// Add loop code
void loop() {
    
}
