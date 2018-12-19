FLAGS = 

TARGETS = sort memmove

.PHONY: all
all: $(TARGETS)

sort: sort.c
memmove: memmove.c
	$(CC) $^ $(FLAGS) -o $@

.PHONY: clean
clean:
	-rm -f $(TARGETS)

