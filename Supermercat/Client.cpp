//
// Created by Álvaro Girona Arias on 8/11/15.
//

#include "Client.h"

Client::Client(){
    Ticket t = Ticket();
    this->ticket = t;
}

Client::Client(Ticket t){
    this->ticket = t;
}