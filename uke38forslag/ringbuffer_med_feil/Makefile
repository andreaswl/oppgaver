

CC		= gcc
CFLAGS	= -g -DDEBUG
LD		= gcc
LDFLAGS	=

SRC 	= rbuf.c rbuftest.c
OBJ		= ${SRC:.c=.o}
EXE 	= rbuftest


.SUFFIXES: .o .c

.c.o:
		$(CC) $(CFLAGS) -c -o $@ $<


all: $(EXE)
rbuftest: rbuf.o
clean:
		rm -f $(OBJ) $(EXE)
