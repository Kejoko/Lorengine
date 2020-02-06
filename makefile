# Makefile created for Lorengine

# Determine the version of C++ to use=
CFLAGS = -std=c17

# More compile flags for safety
CFLAGS += -Wall -Wextra -Wpedantic -Werror -Wfatal-errors


# List directories for include files and library files
CURR_DIR := $(dir $(lastword $(MAKEFILE_LIST)))
INC = -I/CURR_DIR/lib
INC += -L/CURR_DIR/lib


# Create Lorengine executable from object files
Lorengine: main.o
	g++ main.o -o Lorengine

# Create object files from source code and header files
main.o: main.cpp
	g++ -c main.cpp



# Clean up after building executables (remove object files)
clean:
	rm *.o