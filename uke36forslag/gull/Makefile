

CC		= gcc
CFLAGS	= -g -DDEBUG

SRC 	= gem.c cli.c
OBJ		= ${SRC:.c=.o}
EXE 	= cli


.SUFFIXES: .o .c

.c.o:
		$(CC) $(CFLAGS) -c -o $@ $<


all: $(EXE) gem.o

cli: gem.o

clean:
		rm -f $(OBJ) $(EXE)
