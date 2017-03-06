OBJS = main.o cartesian_product.o vectors.o
CC = g++
CFLAGS = -c

cplusplus.out: $(OBJS)
	$(CC) $(OBJS) -o cplusplus.out

main.o: main.cc cartesian_product.h vectors.h
	$(CC) $(CFLAGS) main.cc

cartesian_product.o: cartesian_product.h cartesian_product.cc vectors.h
	$(CC) $(CFLAGS) cartesian_product.cc

vectors.o: vectors.h vectors.cc
	$(CC) $(CFLAGS) vectors.cc

clean:
	rm *.out *.o
