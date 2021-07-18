OBJS = main.o libreria.o
BINARY = program
CFLAGS = -g -Wall #varibale usada en c
all: programa	#esta es la regla principal aqui pongo lo q deseo q ejecute
#all: programa programa2 clean
#Esta regla compila el main
#aqui van todas las dependecias 
#objetivo: dependencias
#		instruccion
programa: $(OBJS)
		gcc -o $(BINARY) $(OBJS)
#cuando pones .o entiende lo que debe hacer
main.o: main.c libreria.h

libreria.o: libreria.c libreria.h

clean: #phony rules
		rm -f $(BINARY) $(OBJS)