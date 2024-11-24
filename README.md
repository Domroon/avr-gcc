# avr-gcc

## Links

[AVR-GCC Tutorial](https://www.mikrocontroller.net/articles/AVR-GCC-Tutorial)

[Arduino as ISP Programmer](https://crycode.de/arduino-als-isp-programmer)

[avr-libc](https://www.nongnu.org/avr-libc/user-manual/index.html)

[avr-libc Github](https://github.com/avrdudes/avr-libc)

[HowTo Makefiles](https://www.mikrocontroller.net/articles/AVR-GCC-Tutorial/Exkurs_Makefiles)

[Fuse Bit Calculator](https://eleccelerator.com/fusecalc/fusecalc.php?chip=atmega328p)

[Makefile Example](https://www.mikrocontroller.net/wikifiles/b/b6/Makefile)

[Makefile Tutorial](https://makefiletutorial.com/)

[Makefile Documentation](https://www.gnu.org/software/make/manual/)

[Arduino UNO Pinout](https://docs.arduino.cc/resources/pinouts/A000066-full-pinout.pdf)

[Old Arduino UNO Pinout](https://www.electroschematics.com/wp-content/uploads/2013/01/Arduino-Uno-R3-Pinouts.png?resize=550%2C423)

[ATmega328P - Complete Datasheet](https://ww1.microchip.com/downloads/aemDocuments/documents/MCU08/ProductDocuments/DataSheets/Atmel-7810-Automotive-Microcontrollers-ATmega328P_Datasheet.pdf)

[FreeRTOS](https://www.freertos.org/Documentation/02-Kernel/07-Books-and-manual/01-RTOS_book)

[avrdude](https://github.com/avrdudes/avrdude)

## ws2812 Links

[WS2812 Library](https://github.com/cpldcpu/light_ws2812)
[Description](https://www.mikrocontroller.net/articles/WS2812_Ansteuerung)

## I2C Links
[Description](https://www.mikrocontroller.net/articles/I%C2%B2C)
[Library](http://www.peterfleury.epizy.com/avr-software.html)

## Compiler Commands

    avr-gcc -c -mmcu=atmega328p -I. -gdwarf-2 -DF_CPU=16000000UL -Os main.c -o ./obj/main.o
    avr-gcc ./obj/main.o -o ./bin/main.elf

## avrdude

    avrdude -c arduino_as_isp -P /dev/ttyUSB0 -p atmega328p -U flash:w:./bin/main.elf

