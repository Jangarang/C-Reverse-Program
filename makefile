CC = gcc
CFLAGS = -Wall -Wextra -I.
DEPS = linkedlist.h

reverse: reverse.o liblist.a
	$(CC) -o reverse reverse.o -L. -llist -lm

ll_insert.o: ll_insert.c $(DEPS)
	$(CC) $(CFLAGS) -c ll_insert.c -o ll_insert.o

reverse.o: reverse.c $(DEPS)
	$(CC) $(CFLAGS) -c reverse.c -o reverse.o

liblist.a: ll_insert.o
	ar rcs liblist.a ll_insert.o

clean:
	rm -rf *.o *.a reverse
