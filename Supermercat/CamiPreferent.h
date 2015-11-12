//
// Created by Álvaro Girona Arias on 9/11/15.
//

#ifndef SUPERMERCAT_CAMIPREFERENT_H
#define SUPERMERCAT_CAMIPREFERENT_H

#include <stack>
#include <list>
#include "Producte.h"

using namespace std;

class CamiPreferent {

public:
    stack returnCami(list<Producte> productes);
};


#endif //SUPERMERCAT_CAMIPREFERENT_H
