#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void print_binary(uint8_t num) {
    uint8_t mask = 0b10000000;
    
    for(int i = 7; i >= 0; i--) {
        uint8_t masked = num & (mask >> (7 - i) );
        masked >>= i;

        printf("%d", masked);
    }

    printf("\n");
}

int main() {

    //! WIKIPEDIA https://en.wikipedia.org/wiki/Bitwise_operation#Bitwise_operators

    // OPS + - * / % (MODULO)
    int i = 5;
    i += 2;     // Das hier ist
    i = i + 2;  // Das selbe wie hier

    // ++ -- erhöht oder subtrahiert 1
    int z = 5; 
    z++; // z = 6, ist das selbe wie z += 1
    ++z; //

    //MODULO    aka Rest Operator
    int x = 13 % 5; // x = 3

    //Bit Ops   
    /*
        >>  Shift Right
        <<  Shift Left

        &   Binary And
        |   Binary Or
        ^   Binary Xor
        ~   Binary Not
    */
    
    
    /* 
        Bin Comp table

        AND
        0 & 0 = 0       
        0 & 1 = 0  
        1 & 0 = 0
        1 & 1 = 1   

        0b00000001
        0b00000001

        res
        0b0...1

        OR
        0 | 0 = 0
        1 | 0 = 1
        0 | 1 = 1
        1 | 1 = 1

        XOR
        0 ^ 0 = 0
        1 ^ 0 = 1
        0 ^ 1 = 1
        1 ^ 1 = 0

        NOT
        ~a
        0b00000001
        0b11111110 
    */

    uint8_t a = 1;
    uint8_t b = 2;

    uint8_t res = a & b;
    res = a | b;
    res = a ^ b;
    res = ~a;

    // Auch wieder in dem format
    res |= a;

    //Für shifts auch
    res >>= 2; // Rechts steht immer der shift count (kann auch ne variable sein..obv..)
    /*
        0b00000010 (= 2) wir shiften dass jetzt um 2 (>> 2)
        schritt 1:
        0b00000010 -> 0b00000001

        schritt 2:
        0b00000001 -> 0b00000000
    */

    return 0;
}