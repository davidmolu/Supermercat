//
// Created by Álvaro Girona Arias on 8/11/15.
//

#ifndef SUPERMERCAT_SUPERMERCAT_H
#define SUPERMERCAT_SUPERMERCAT_H

#include "Caixa.h"
#include "Producte.h"
#include "Client.h"
#include <vector>

using namespace std;

class Supermercat {
private:
    vector<Caixa> caixes;
    vector<Producte> productes;
    vector<Client> clients;
public:
    Supermercat();
    Supermercat(int rengles, int columnes, int caixes);

    void addCaixa(Caixa caixa);

    void addClient(Client cliente);

    void addProducte(Producte prod);

    Client getLastClient();
    
    caixa assignarCaixaClient(Client c)
};


#endif //SUPERMERCAT_SUPERMERCAT_H
