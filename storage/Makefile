CC     = gcc
CFLAGS = -Wall -Wextra -g
SRCS   = $(wildcard *.c)
BINS   = $(SRCS:%.c=bin/%)

all: $(BINS)

bin/%: %.c | bin
	$(CC) $(CFLAGS) $< -o $@

bin:
	mkdir -p bin

clean:
	rm -rf bin

.PHONY: all clean
