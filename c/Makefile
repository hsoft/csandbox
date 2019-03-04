FLAGS = 

TARGETS = bitfield 

.PHONY: all
all: $(TARGETS)

bitfield: bitfield.c
	$(CC) $^ $(FLAGS) -o $@

.PHONY: clean
clean:
	-rm -f $(TARGETS)


