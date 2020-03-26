#include "button.h"
#include "gpio.h"

/* Fyll inn disse to */
#define BUTTON_A_PIN ??
#define BUTTON_B_PIN ??

void button_init(){
    GPIO->PIN_CNF[17] = 0;
    GPIO->PIN_CNF[26] = 0;
}

uint8_t button_a_pressed(){
    if(!(GPIO->IN & (1<<17))) {
        return 1;
    }
    else {
        return 0;
    }
}

uint8_t button_b_pressed(){
    if(!(GPIO->IN & (1<<26))) {
        return 1;
    }
    else {
        return 0;
    }

}
