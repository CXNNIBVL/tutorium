#include <stdio.h>
#include <stdlib.h>


// Defines
#define MY_INTEGER 12
#define MY_DEF_WITH_PARAMETER(X) MY_INTEGER + X

void lol(int zahl) { 
    return;
}

//Typedef
typedef int MyCustomIntegerName;

int main() {

    MyCustomIntegerName penis = 12;


    lol( MY_DEF_WITH_PARAMETER(3) );
    //Wird erweitert auf
    lol( MY_INTEGER + 3 );
    //Wird erweitert auf
    lol( 12 + 3 );


    return 0;
}