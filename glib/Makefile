FLAGS = $(shell pkg-config --cflags --libs glib-2.0)

TARGETS = hashmap

.PHONY: all
all: $(TARGETS)

hashmap: hashmap.c
	$(CC) $^ $(FLAGS) -o $@

.PHONY: clean
clean:
	-rm -f $(TARGETS)

