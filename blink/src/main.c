#include <avr/io.h>
#include <util/delay.h>

int main(void){
    DDRD |= (1<<DDD2);

    while(1){
        PORTD ^= (1<<PD2);
        _delay_ms(200);
    }
}