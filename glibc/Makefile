FLAGS = 

TARGETS = sort

.PHONY: all
all: $(TARGETS)

sort: sort.c
	$(CC) $^ $(FLAGS) -o $@

.PHONY: clean
clean:
	-rm -f $(TARGETS)

