meme.exe : calc.o stack.o
	gcc -o meme.exe calc.o stack.o

calc.o : calc.c stack.h
	gcc -c calc.c

otherFile.o : stack.c stack.h
	gcc -c stack.c