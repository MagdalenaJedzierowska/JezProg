sources = zad1_rozwiniecia_makrodef.c zad2_makrodef_wywolania.c zad3_czyt.c zad4_petla.c

programs = $(basename $(sources))
objects = $(addsuffix .o, $(programs))

CFLAGS = -Wall -std=c11
LDLIBS = -lm

.PHONY : clean
clean :
	-$(RM) $(objects) $(programs) *~

all : $(programs)
