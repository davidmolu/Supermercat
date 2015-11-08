//
// Created by Álvaro Girona Arias on 8/11/15.
//

#ifndef SUPERMERCAT_PRODUCTE_H
#define SUPERMERCAT_PRODUCTE_H

#include <string>
#include <iostream>

using namespace std;

class Producte {
private:
    string producte_id;//nom
    double preu;
    string seccio;
    int temps_cobrament;//temps que triga el caixer a agafar el producte i llegir-ne codi de barres.
public:
    Producte();
    Producte(double preu, string seccio, int t_cobrament);

    void setNom(string nom);
    string getNom();

    void setPreu(double preu);
    double getPreu();
};


#endif //SUPERMERCAT_PRODUCTE_H
