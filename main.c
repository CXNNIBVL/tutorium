#include <stdio.h> 
#include <stdlib.h> 
 


typedef struct Drohne {
    const char* Model;
    double Hovering_Accuracy_Vertical;
    double Hovering_Accuracy_Horizontal;
    int Max_Ascent_Speed;
    int Max_Decent_Speed;
    int Max_Speed;
    int Max_Flight_Time;
    int Max_Flight_Altitude;
} Drohne;










// **********************************


/* laenge des Dateinamen */ 
#define DATEINAME_LENGTH 20 
 
int main(void) 
{ 
    FILE * dateiPtr; 
    char zeichen; 
    char dateiname[DATEINAME_LENGTH];

    // Einlesen des Dateinamen von der Konsole
    gets(dateiname);

    // Öffnen der Datei
    dateiPtr = fopen(dateiname, "r");

    // Prüfen ob die Datei geöffnet werden konnte
    if(!dateiPtr) {
        exit(EXIT_FAILURE);
    }

    zeichen = fgetc(dateiPtr);
    while(zeichen != EOF) {
        putchar(zeichen);
        zeichen = fgetc(dateiPtr);
    }

    fclose(dateiPtr);

    return EXIT_SUCCESS;
} 