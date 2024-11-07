#include "Banca.hpp"
#include <iostream>


Banca::Banca(const string& nume): nume(nume) {}

Banca::~Banca(){
    cout<<"\nBanca destructor was called\n";
}

void Banca::adaugaClient( Client& client) {
    clienti.push_back(client);
}

void Banca::afiseazaDetaliiClienti()  {
    cout << "Detalii clienti:\n";
    for ( auto& client : clienti) {
        cout << "Client: " << client.getNume() << "\n";
        client.afiseazaConturi();
    }
}

