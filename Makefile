CHK_SOURCES_C = main.c

debug:
	gcc -ggdb3 $(CHK_SOURCES_C)

check-syntax:
	gcc -Wall $(CHK_SOURCES_C) -fsyntax-only
