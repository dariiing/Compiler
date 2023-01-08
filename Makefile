all: 
	yacc -d -Wcounterexamples limbaj.y 
	lex limbaj.l 
	gcc -Wno-implicit-function-declaration code.c lex.yy.c y.tab.c -o limbaj