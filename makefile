OS ?= linux

ifeq ($(OS), windows)
	CC        := x86_64-w64-mingw32-gcc
    EXE_EXT   := .exe
else
    CC        := gcc
    EXE_EXT   :=
endif

CFLAGS  := -Wall -Wextra -g -O3

APP_NM  := EXAMPLE

.PHONY: all clean

all:

	$(CC) $(CFLAGS) $(APP_NM).C -o $(APP_NM)
