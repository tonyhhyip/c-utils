CC = gcc
CFLAGS += -Wall -I$(IDIR)

IDIR = include
ODIR = ../obj

MODULE = collection/*.o stringy/*.o
MODULES = $(MODULE:./=../obj)
OMODULES = $(MODULES:%=../obj/%)

all: $(MODULES) main
	$(CC) $(CFLAGS) $(OMODULES) $(ODIR)/*.o -o oi

$(MODULES):
	make -C $(@:/*.o=)

main:
	$(CC) $(CFLAGS) -c main.c -o $(ODIR)/$@.o $<

clean:
	rm -rf $(ODIR)/* oi
