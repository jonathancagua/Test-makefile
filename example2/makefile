OBJS = main.o libreria.o
BINARY = program

x = primero
Vrecursiva = $(x) recursiva #se ejecuta cuando se llama
Vsimple := $(x) simple #se ejecuta al instante
x = segunda
all: programa imprimir	#esta es la regla principal aqui pongo lo q deseo q ejecute
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
#el @ hace q no se imprima la linea de ejecucion.
imprimir: 
		@echo $(Vrecursiva)
		@echo $(Vsimple)