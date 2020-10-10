all: compile run final

compile:
	gcc -o CallSO_test CallSO_test.c

run:
	./CallSO_test

final:
	dmesg
