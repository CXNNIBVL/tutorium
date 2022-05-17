#include <stdio.h>
#include <stdlib.h>

typedef int Sexpuppe;
typedef float FurrySuit;
typedef double Doener;

const Sexpuppe GEILE_PUPPE= 12;

typedef struct DHL_Paket {
    Sexpuppe puppe;
    FurrySuit furr_suit;
    Doener doener;
} DHL_Paket;

DHL_Paket Bestellung_bei_geschminktem_Tuerken() {
    DHL_Paket dhl = (DHL_Paket) {GEILE_PUPPE, 2.0, 10.0 };
    return dhl;
}

void ZeigPissschlitz(DHL_Paket dhl) {
    printf("puppe = %d, furrsuit = %f, doener = %lf\n", 
        dhl.puppe, dhl.furr_suit, dhl.doener
    );
}

int main() {

    DHL_Paket dhl = Bestellung_bei_geschminktem_Tuerken();
    ZeigPissschlitz(dhl);

    return 0;
}