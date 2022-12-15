all: 
	yacc -d -Wcounterexamples limbaj.y 
	lex limbaj.l 
	gcc -Wno-implicit-function-declaration lex.yy.c y.tab.c -o limbaj