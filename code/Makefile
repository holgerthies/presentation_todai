# Makefile for user_programs

prefix=/Users/holgerthies/iRRAM/installed
exec_prefix=/Users/holgerthies/iRRAM/installed

CC = gcc -std=c11
CFLAGS = -g -O2
CPP = gcc -E
CPPFLAGS =     -I/Users/holgerthies/iRRAM/installed/include
CXX = g++ -std=c++11
CXXCPP = g++ -E -std=c++11
CXXFLAGS = -g -O2
LDFLAGS = -Xlinker -rpath -Xlinker /Users/holgerthies/iRRAM/installed/lib
LDLIBS =  -L/Users/holgerthies/iRRAM/installed/lib -liRRAM -lmpfr -lgmp -lm -lpthread

EXAMPLES_BIN = \
	euler e_example swanseatest-2 itsyst itsyst2 itsyst3 factorial \
        mp_extension pi_example rational_sep sinus probe \
        swanseatest hilbert matrix timings-iRRAM jmmuller jmmuller2 \
        float_extension test_module limit_example harmonic \
        test_values test_exceptions test_round test_DYADIC test_INTEGER \
        interval_test test_commandline test_strings gamma_bernoulli \
        lambov analytic fileio algebraic-BFMS thread_test test-MPFR-iRRAM timings-MPFR-iRRAM

all: $(EXAMPLES_BIN)

maintainer-clean: distclean
distclean: clean
	rm -f Makefile

clean:
	rm -f $(EXAMPLES_BIN)

install:
