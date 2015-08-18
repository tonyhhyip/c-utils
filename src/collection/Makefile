CC ?= gcc
CFLAGS += -Wall -I$(IDIR)

IDIR = ../includes
ODIR = ../../obj/collection

SRC = list.c

OBJS = $(SRC:.c=.o)

all: dir $(OBJS)

dir:
	mkdir $(ODIR)

clean:
	rm -r $(ODIR)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(ODIR)/$@
