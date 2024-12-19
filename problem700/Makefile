# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -O2

# Output executable name
OUTPUT = euler700.out

# Source files and object files
SRCS = main.c dependency/greatest_common_divisor.c
OBJS = $(SRCS:.c=.o)

# Header files
HEADERS = folder/header.h

# Default target
all: $(OUTPUT)

# Link object files to create the executable
$(OUTPUT): $(OBJS)
	$(CC) -o $@ $^

# Compile source files into object files
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJS) $(OUTPUT)