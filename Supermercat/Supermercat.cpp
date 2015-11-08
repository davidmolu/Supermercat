//
// Created by Álvaro Girona Arias on 8/11/15.
//

#include "Supermercat.h"

Supermercat::Supermercat(int rengles, int columnes, int caixes) {
    for (int i = 1; i <= caixes ; ++i) {
        Caixa caixa = Caixa(i);
        this->caixes.push_back(caixa);
    }
}

void Supermercat::addCaixa(Caixa caixa) {

}

void Supermercat::addClient(Client cliente) {

}

void Supermercat::addProducte(Producte prod) {

}


