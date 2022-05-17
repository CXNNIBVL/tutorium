#include <stdio.h>
#include <stdlib.h>


/*
    int* a ----> a = 0
    int* b ----> b = 15

    nach func:
    int* a ----> b = 15
    int* b ----> a = 0
*/
void switch_pointer(int** ptr_a, int** ptr_b) {
    int* tmp = *ptr_a;

    *ptr_a = *ptr_b;
    *ptr_b = tmp;
}


int main() {

    int a = 0;
    int b = 15;
    int* addr_a = &a; // addr_a --> a
    int* addr_b = &b;

    printf("addr a = %p, addr b = %p \n", addr_a, addr_b);
    printf("value a = %d, value b = %d\n", *addr_a, *addr_b);

    // &addr_a bedeutet: &addr_a --> addr_a --> a
    switch_pointer(&addr_a, &addr_b);

    printf("\naddr a = %p, addr b = %p\n", addr_a, addr_b);
    printf("value a = %d, value b = %d\n", *addr_a, *addr_b);
   

    return 0;
}