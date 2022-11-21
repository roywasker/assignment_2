
all: connections libmymat.a

libmymat.a: my_mat.o 
	ar -rcs libclassloops.a my_mat.o  

connections: main.o libmymat.a
	gcc -Wall -g -o connections main.o libmymat.a -lm 

main.o: main.c my_mat.h
	gcc -Wall -g -c main.c

my_mat.o: my_mat.c my_mat.h
	gcc -Wall -g -c my_mat.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so connections