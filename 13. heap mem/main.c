

void funktion() { 
    int x = 0;
    int y = 0;
}


void funktion2() {
    int* i = malloc( 1 * sizeof(int) );
    free(i);
}

int main(int anzahl) {

    /*
        malloc  -> memory alloc. Kann uns dynamisch speicher geben
        realloc -> reallocate memory
        free    -> free memory
    */
   int RAM[150];

    //RAM[anzahl]
    // NInteger[anzahl]
    // i ist die addresse vom 0. Element von NInteger
    int* i = malloc( anzahl *  sizeof(int) );

   for(int iter = 0; iter < anzahl; iter++) {
       i++;
   }

   funktion2();

   int Airbus = (int) 5.0;

}