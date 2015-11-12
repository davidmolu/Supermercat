//
// Created by Álvaro Girona Arias on 8/11/15.
//

#ifndef SUPERMERCAT_PRODUCTE_H
#define SUPERMERCAT_PRODUCTE_H

#include <string>
#include <iostream>


/**
 * @class Producte
 * @brief Clase producte
 */
using namespace std;

class Producte {
private:
    string producte_id;//nom
    double preu;
    char seccio[];
    int temps_cobrament;//temps que triga el caixer a agafar el producte i llegir-ne codi de barres.
public:
    Producte();
    /**
 * @brief inicialització del producte
 * @param preu: el preu que té el producte
 * @param seccio: la secció a la que es localitza
 * @param t_cobrament: el temps que es triga en pasar per caixa el producte
 */
    Producte(double preu, char seccio[], int t_cobrament);

    void setNom(string nom);
    string getNom();

    void setPreu(double preu);
    double getPreu();
};


#endif //SUPERMERCAT_PRODUCTE_H
