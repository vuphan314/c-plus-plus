COMPILER = g++
LINKING_OPTIONS = -o $(EXECUTABLE)
ASSEMBLING_OPTIONS = -c -Ofast # -std=c++11

EXECUTABLE = cplusplus.out
OBJECTS = main.o timing.o cartesian_product.o vectors.o

############################################################

$(EXECUTABLE): $(OBJECTS)
	$(COMPILER) $(OBJECTS) $(LINKING_OPTIONS)

main.o: main.cc timing.h cartesian_product.h vectors.h
	$(COMPILER) main.cc $(ASSEMBLING_OPTIONS)

timing.o: timing.h timing.cc vectors.h
	$(COMPILER) timing.cc $(ASSEMBLING_OPTIONS)

cartesian_product.o: cartesian_product.h \
		cartesian_product.cc vectors.h
	$(COMPILER) cartesian_product.cc $(ASSEMBLING_OPTIONS)

vectors.o: vectors.h vectors.cc
	$(COMPILER) vectors.cc $(ASSEMBLING_OPTIONS)

############################################################

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
