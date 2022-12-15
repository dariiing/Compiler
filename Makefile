all: 
	yacc -d -Wcounterexamples limbaj.y 
	lex limbaj.l 
	gcc lex.yy.c  y.tab.c -o limbaj 
