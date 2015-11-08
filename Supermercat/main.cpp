#include <iostream>
#include "Supermercat.h"

using namespace std;


void llegirEstructuraSupermercat();
void llegirProductes();

int main() {

    llegirEstructuraSupermercat();
    llegirProductes();
    return 0;
}

void llegirEstructuraSupermercat(){
    int rengles, columnes, caixes = -1;

    while (rengles < 0 || columnes < 0 || caixes < 0){//han de ser positius.
        cin >> rengles >> columnes >> caixes;
    }

    Supermercat supermercat = Supermercat(rengles, columnes, caixes);
}

void llegirProductes(){
    int num_prods = -1;
    while( 0 > num_prods ){//el nombre de productes ha de ser positiu.
        cin >> num_prods;
    }

    string prod;
    double preu;
    string seccio;
    int temps_cobrament;

    while (num_prods != 0){

    }
}