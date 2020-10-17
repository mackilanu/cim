scanner: src/main.c src/lexer.c
	gcc -o scanner -g src/main.c src/lexer.c

clean: 
	rm -f scanner *.o
