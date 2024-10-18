PRG_NAME=main
$(PRG_NAME): $(PRG_NAME).c
	clang $(PRG_NAME).c `pkg-config --libs --cflags raylib` -o $(PRG_NAME)
