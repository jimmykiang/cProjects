#include "lib.h"

/*
lib.h
lib.c
main.c

gcc -c -o lib.o lib.c
ar rcs lib.a lib.o

gcc main.c -o main.exe -L. lib.a

*/

int add_numbers(int a, int b) {
    return a + b;
}
