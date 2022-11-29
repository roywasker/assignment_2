CC=gcc
AR=ar
OBJECT_MAIN=main.o
OBJECT_LIB=my_mat.o
FLAGS= -Wall -g

all: connections libmymat.a 

libmymat.a: $(OBJECT_LIB) 
	$(AR) -rcs libmymat.a $(OBJECT_LIB)   

connections: $(OBJECT_MAIN) libmymat.a
	$(CC) $(FLAGS) -o connections $(OBJECT_MAIN) libmymat.a -lm 

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

.PHONY: clean all

clean:
	rm -f *.o *.a connections