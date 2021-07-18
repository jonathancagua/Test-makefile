OBJS = main.o libreria.o
CFLAGS = -g -Wall #varibale usada en c
all: programa	#esta es la regla principal aqui pongo lo q deseo q ejecute
#all: programa programa2 clean
#Esta regla compila el main
#aqui van todas las dependecias 
#REVISAR 10.5.3 Automatic Variables
################ REGLA #################
#objetivo: dependencias
#		instruccion
########################################
#$@ coge el nombre del objetivo
programa: $(OBJS)
		gcc -o $@ $?
########################################		
#vamos a reemplazar estos dos .o por %.0
#$< pone el primer requisito
#$@ pone lo mismo q dice objetivo
#main.o: main.c libreria.h
#libreria.o: libreria.c libreria.h
%.o: %c
		gcc $(CFLAGS) -c $< -o $@
########################################
clean: #phony rules
		rm -f programa $(OBJS)