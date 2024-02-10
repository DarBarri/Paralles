CC = g++
CFLAGS = -Wall -Wextra -std=c++11

# Array type selection
ARRAY_TYPE = float

ifeq ($(ARRAY_TYPE), float)
    ARRAY_TYPE_FLAG = -DFLOAT_ARRAY
else
    ARRAY_TYPE_FLAG = -DDOUBLE_ARRAY
endif

# Build target
all: Task1

main: Task1.cpp
	$(CC) $(CFLAGS) $(ARRAY_TYPE_FLAG) -o Task1 Task1.cpp

#clean:
#	rm -f Task1
