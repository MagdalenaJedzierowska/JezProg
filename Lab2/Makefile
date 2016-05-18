sources = zad1_eof_bit.c zad2_liczba_data.c zad3_szyfrowanie_blokowe.c zad3_deszyfrowanie_blokowe.c

programs = $(basename $(sources))
objects = $(addsuffix .o, $(programs))

CFLAGS = -Wall -std=c11
LDLIBS = -lm

.PHONY : clean
clean :
	-$(RM) $(objects) $(programs) *~

all : $(programs)