FLAGS = 

TARGETS = sort memmove hashmap

.PHONY: all
all: $(TARGETS)

sort: sort.c
memmove: memmove.c
hashmap: hashmap.c
	$(CC) $^ $(FLAGS) -o $@

.PHONY: clean
clean:
	-rm -f $(TARGETS)

