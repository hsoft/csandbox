FLAGS = $(shell pkg-config --cflags --libs icu-uc)

TARGETS = upper

.PHONY: all
all: $(TARGETS)

upper: upper.c
	$(CC) $^ $(FLAGS) -o $@

.PHONY: clean
clean:
	-rm -f $(TARGETS)

