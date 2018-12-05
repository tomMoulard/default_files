CC = gcc
CFLAGS = -DTESTING -Wall -pedantic -Wextra -std=c99 -Werror -g -fmax-errors=5

HEAD = sample.c
BINS = $(HEAD:.c=)
THEA = test/sample_test.c
TBIN = unit_test

all: $(BINS)

$(BINS):
	$(CC) $(CFLAGS) $(HEAD) -o $(BINS)

test:
	$(CC) $(CFLAGS) $(THEA) -lcriterion -o $(TBIN)

check:
	make test && ./$(TBIN)

clean:
	rm -f $(BINS) $(TBIN)

.PHONY: all test check clean
