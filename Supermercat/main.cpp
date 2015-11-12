#include <iostream>
#include "Supermercat.h"

using namespace std;


void llegirEstructuraSupermercat(Supermercat &supermercat);
void llegirProductes(Supermercat &supermercat);

int main() {

    Supermercat supermercat;

    llegirEstructuraSupermercat(supermercat);
    llegirProductes(supermercat);
    return 0;
}

void llegirEstructuraSupermercat(Supermercat &supermercat){
    int rengles, columnes, caixes = -1;

    while (rengles < 0 || columnes < 0 || caixes < 0){//han de ser positius.
        cin >> rengles >> columnes >> caixes;
    }

    supermercat = Supermercat(rengles, columnes, caixes);
}

void llegirProductes(Supermercat &supermercat){
    int num_prods = -1;
    while( 0 > num_prods ){//el nombre de productes ha de ser positiu.
        cin >> num_prods;
    }

    string prod;
    double preu;
    string seccio;
    int temps_cobrament;//ha de ser >= 0. CANVIAR.

    while (num_prods != 0){
        cin >> prod >> preu >> seccio >> temps_cobrament;
        Producte prod = Producte(preu, seccio, temps_cobrament);
        supermercat.addProducte(prod);
    }
}