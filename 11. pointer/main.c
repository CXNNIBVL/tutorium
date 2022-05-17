#include <stdio.h>
#include <stdlib.h>

void andere_funktion(int a) {
    a += 1;
}

void andere_funktion_mit_ptr(int * a_ptr) {
    *a_ptr += 1;
}

int andere_funktion_3(int a) {
    int i = a += 1;
    return i;
}


int main() {


    int RAM[150];

    //Fill Ram
    for(int i = 0; i < 150; i++) {
        RAM[i] = i;
    }
    
    int index = 0; // Pointer = integer adresse in diese "RAM Array"
    int value = RAM[index];

    // ******************************************************

    // int zahl = 15; // RAM[140.725.698.117.412]

    // int * pointer = &zahl; // Pointer is literally nur ein int "140.725.698.117.412"
    // int int_value = *pointer; // RAM[140.725.698.117.412]

    // printf("addr von zahl = %p\nvalue = %d",
    //     pointer, int_value
    // );


    // ********************************************************

    int x = 12;
    printf("vor func: x = %d\n", x);
    andere_funktion(x);
    printf("nach func: x = %d\n", x);

    printf("\n\n");

    printf("vor func mit ptr: x = %d\n", x);
    andere_funktion_mit_ptr(&x);
    printf("nach func mit ptr: x = %d\n", x);

    return 0;
}