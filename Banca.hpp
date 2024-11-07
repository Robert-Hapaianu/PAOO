#ifndef BANCA_HPP
#define BANCA_HPP


#include <vector>
#include "Client.hpp"
#include <iostream>
using namespace std;

class Banca {
private:
    string nume;
    vector<Client> clienti;

public:
    Banca(const string& nume);

    ~Banca();

    // Adaugă un client nou
    void adaugaClient( Client& client);

    // Afișează detaliile tuturor clienților și conturilor
    void afiseazaDetaliiClienti() ;
};


#endif
