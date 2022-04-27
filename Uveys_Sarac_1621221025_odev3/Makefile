# The compiler
CC = gcc

#derleyici flag'leri, -g: debug mode, -Wall: wrap all
CFLAGS = -g -Wall

# library source file
SOURCE = chesslib.c

# main source file
MAIN = main.c

# executable file (output file)
OUT = main.x

# compiling (type --> make)
all:
	$(CC) $(CFLAGS) $(SOURCE) $(MAIN) -o $(OUT)

# cleaning (type --> make clean)
clean:
	rm -rf data.dat $(OUT)


