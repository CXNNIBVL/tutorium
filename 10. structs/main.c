#include <stdio.h>
#include <stdlib.h>

typedef struct MyStruct {
    float myfloat;
    int myint;
    char mychar;
} MyStruct;

int main() {

    MyStruct my_struct = { 3.141592653, 5, 'c' };
    
    printf("%d", my_struct.myint);
    

    return 0;
}