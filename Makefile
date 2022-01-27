CC = g++
CFLAGS = -g -Wall
TARGET = bbup
SRC_DIR = src
BUILD_DIR = build
DIST_DIR = dist

default: build

main.o: $(SRC_DIR)/main.cpp
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c -o $(BUILD_DIR)/$@ $<

main: $(BUILD_DIR)/main.o
	@mkdir -p $(DIST_DIR)
	@$(CC) $(CFLAGS) -o $(DIST_DIR)/$@ $<

build: main

clean:
	@rm -rf build/
