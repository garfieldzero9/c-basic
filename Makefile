CC = gcc
CFLAGS = -Wall -Wextra -O2
BIN_DIR = bin

.PHONY: build clean

# Usage: make build FILE=intro.c
build:
	@if [ -z "$(FILE)" ]; then \
		echo "Error: Please specify a file using FILE=<filename>.c"; \
		exit 1; \
	fi
	@mkdir -p $(BIN_DIR)
	@$(CC) $(CFLAGS) $(FILE) -o $(BIN_DIR)/$(basename $(FILE))
	@./$(BIN_DIR)/$(basename $(FILE))

clean:
	rm -rf $(BIN_DIR)
