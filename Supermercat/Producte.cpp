//
// Created by Álvaro Girona Arias on 8/11/15.
//

#include "Producte.h"

Producte::Producte(){

}

Producte::Producte(double preu, string seccio, int t_cobrament) {
    this->preu = preu;
    this->seccio = seccio;
    this->temps_cobrament = t_cobrament;
}

void Producte::setPreu(double preu) {
    this->preu = preu;
}

double Producte::getPreu() {
    return this->preu;
}

void Producte::setNom(string nom) {
    this->producte_id = nom;
}

string Producte::getNom() {
    return this->producte_id;
}


