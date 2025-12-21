#ifndef PRIV_H
#define PRIV_H

#include "webserver.h"

using namespace std;

class Priv {
public:
    Priv() : user("root"), passwd("root"), databasename("yourdb"){};
    ~Priv(){};

    string user;
    string passwd;
    string databasename;
};

#endif