CC ?= gcc
CFLAGS += -Wall -I$(IDIR)

IDIR = ../includes
ODIR = ../../obj/stringy

SRC = string.c

OBJS = $(SRC:.c=.o)

all: dir $(OBJS)

dir:
	mkdir $(ODIR)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(ODIR)/$@

clear:
	rm -r $(ODIR)
