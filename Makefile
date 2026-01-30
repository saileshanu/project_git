CC      = gcc
CFLAGS  = -Wall
RM      = rm -f


default: all

all: Hello

Hello: Hello.c
	$(CC) $(CFLAGS) hello.c -o hello

clean veryclean:
	$(RM) Hello