CC=avr-gcc
CFLAGS=-mmcu=atmega328p -I -gdwarf-2 -DF_CPU=16000000UL -Os
SRC=src
OBJ=obj
SRCS=$(wildcard $(SRC)/*.c)
OBJS=$(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCS))

BINDIR=bin
BIN=$(BINDIR)/main

all:$(BIN)

$(BIN): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJ)/%.o: $(SRC)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -r $(BINDIR)/* $(OBJ)/*

upload:
	avrdude -c arduino_as_isp -P /dev/ttyUSB0 -p atmega328p -U flash:w:$(BIN)