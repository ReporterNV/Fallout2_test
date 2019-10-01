all: SPECIAL_Test.c SPECIAL_function.c
	gcc -O0 -std=gnu99 SPECIAL_function.c SPECIAL_Test.c -o SPECIAL_Test
run: SPECIAL_Test
	./SPECIAL_Test
clean: 
	rm SPECIAL.txt
indent: *.c
	indent -kr -i8 -ts8 -sob -l80 -ss -bs-linux *.c	
