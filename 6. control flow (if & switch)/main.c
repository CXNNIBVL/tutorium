#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//  y value for x in range 0..=9
double y_0_9(double x) {   
    return 1 - (1 / exp(x));
}

//  y value for x in range 10..=17
double y_10_17(double x) {
    return 20 - pow(x - 14, 2);
}

//  y value for x in range 18..=22
double y_18_22(double x) {
    return 1 - 1 / exp(30 - x);
}

//  y value for x in range 23..=24
double y_23_24(double x) {
    return 2 * x - 45;
}

//  y value for x in range 25..=26
double y_25_26(double x) {
    return 5;
}

//  y value for x = 27
double y_27(double x) {
    return -4.2 * x + 118.4;
}

//  y value for x in range 28..=29
double y_28_29(double x) {
    return y_18_22(x);
}

/*
    boolsches statement (aka expression) = true (=1) oder false(=0)
    
    int a = 0;
    int b = 1;

    // result = 0
    int result = a == b; 

    int result =    a > b           false, 0
                    a < b           true , 1
                    a >= b          false, 0
                    a <= b          true, 1
                    a == b          false, 0
                    a !=  b         true, 1

    if(a == b) {
        int zahl = a + b;
    }

    if(bool && bool) { && UND
        ...
    }

    false || true
    if(bool || bool) { || ODER
        ...
    }

    

    int a = 1;
    int b = 1;
        false && true
    if(a == b && a < b) {
        ...
    }

    

*/

//  y value for x in range 0..=29
// IF ERKLÄRUNG
double y(double x) { // x = 22

    if(x >= 0 && x <= 9) {
        return y_0_9(x);
    }

    if(x >= 10 && x <= 17)
        return y_10_17(x);

    if(x >= 18 && x <= 22)
        return y_18_22(x);
    
    if(x >= 23 && x <= 24)
        return y_23_24(x);
    
    if(x >= 25 && x <= 26)
        return y_25_26(x);
    
    if(x == 27)
        return y_27(x);
    
    return y_28_29(x);
}

// SWITCH ERKLÄRUNG
void switch_erkl() {

    int op = 5;

    switch (op) {
    case 1:
        printf("%d", op);
        break;
    case 2:
        printf("%d", op);
        break;
    case 3:
        printf("%d", op);
        break;
    case 4:
        printf("%d", op);
        break;
    default:
        printf("Default case\n");
        break;
    };

    printf("\n");    
}

int main() {

    // for(double x = 0; x < 30; x += 1) {
    //     double v = y(x);
    // }

    switch_erkl();

    return 0;
}