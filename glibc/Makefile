FLAGS = 

TARGETS = sort memmove hashmap regex

.PHONY: all
all: $(TARGETS)

sort: sort.c
memmove: memmove.c
hashmap: hashmap.c
regex: regex.c
	$(CC) $^ $(FLAGS) -o $@

.PHONY: clean
clean:
	-rm -f $(TARGETS)

