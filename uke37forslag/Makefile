

CC		= gcc
CFLAGS	= -g -DDEBUG
LD		= gcc
LDFLAGS	=

SRC 	= gem.c cli.c rbuf.c rbuftest.c
OBJ		= ${SRC:.c=.o}
EXE 	= cli rbuftest


.SUFFIXES: .o .c

.c.o:
		$(CC) $(CFLAGS) -c -o $@ $<


all: $(EXE) gem.o
cli: gem.o
rbuftest: rbuf.o
clean:
		rm -f $(OBJ) $(EXE)
