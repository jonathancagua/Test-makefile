OBJS = main.o libreria.o
BINARY = program
all: programa 	#esta es la regla principal aqui pongo lo q deseo q ejecute
#all: programa programa2 clean
#Esta regla compila el main
#aqui van todas las dependecias 
#objetivo: dependencias
#		instruccion
programa: $(OBJS)
		gcc -o $(BINARY) $(OBJS)

main.o: main.c libreria.h
		gcc -c main.c

libreria.o: libreria.c libreria.h
		gcc -c libreria.c

clean: #phony rules
		rm -f $(BINARY) $(OBJS)