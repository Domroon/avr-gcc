# all: main.elf
# 	avr-gcc -c -mmcu=atmega328p -I. -gdwarf-2 -DF_CPU=16000000UL -Os main.c -o ./obj/main.o

# main.elf: main.o
# 	avr-gcc ./obj/main.o -o ./bin/main.elf

CC=avr-gcc
CFLAGS=-mmcu=atmega328p -I -gdwarf-2 -DF_CPU=16000000UL -Os
OBJS=main.o
BIN=main

all:$(BIN)

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o main

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -r main *.o *.dSYM

upload:
	avrdude -c arduino_as_isp -P /dev/ttyUSB0 -p atmega328p -U flash:w:main