BIN_DIR=bin

CC = gcc
CCFLAGS = -g -Wall -MMD

# Targets
JOINLN = $(BIN_DIR)/joinln
SPLITLN = $(BIN_DIR)/splitln

TARGETS = $(JOINLN) $(SPLITLN)

# Objects
JOINLN_OBJ = src/joinln.o src/joinln_main.o
SPLITLN_OBJ = src/splitln.o src/splitln_main.o

OBJECTS = $(JOINLN_OBJ) $(SPLITLN_OBJ)

# Dependencies
DEPENDS = $(OBJECTS:.o=.d)
-include $(DEPENDS)

# Phony targets
.PHONY: all clean
all: $(TARGETS)
clean:
	rm -f $(OBJECTS) $(DEPENDS) $(TARGETS)

# Target for $(JOINLN)
$(JOINLN): $(JOINLN_OBJ) | $(BIN_DIR)
	$(CC) $(CCFLAGS) $^ -o $@

# Target for $(SPLITLN)
$(SPLITLN): $(SPLITLN_OBJ) | $(BIN_DIR)
	$(CC) $(CCFLAGS) $^ -o $@

# Target for $(BIN_DIR)
$(BIN_DIR):
	mkdir -p $(BIN_DIR)