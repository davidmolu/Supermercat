//
// Created by Álvaro Girona Arias on 8/11/15.
//

#ifndef SUPERMERCAT_PRODUCTECOMPRAT_H
#define SUPERMERCAT_PRODUCTECOMPRAT_H

#include "Producte.h"

class ProducteComprat {
private:
    Producte *producte;
    int quantitat;
public:
    ProducteComprat(Producte *prod, int quantitat);
};


#endif //SUPERMERCAT_PRODUCTECOMPRAT_H
