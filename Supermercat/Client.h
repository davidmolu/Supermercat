//
// Created by Álvaro Girona Arias on 8/11/15.
//

#ifndef SUPERMERCAT_CLIENT_H
#define SUPERMERCAT_CLIENT_H

#include "Ticket.h"
#include <list>
#include "ProducteComprat.h"

class Client {
private:
    Ticket ticket;
    list<ProducteComprat> productes;
public:
    Client();
    Client(Ticket t);
};


#endif //SUPERMERCAT_CLIENT_H
