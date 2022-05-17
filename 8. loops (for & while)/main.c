#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 12;

    // While loop
    while(i >= 8) {
        i -= 1;
    }

    // do-while loop
    do {
        i--;
    } while(i > 7);

    

    int arr[4] = {0,1,2,3};
    // For loop
    for(int iter = 0; iter < 4; iter++) {
        int element = arr[iter];
        printf("element at index %d = %d\n", iter, element);
    }

    return 0;
}