#include "Client.hpp"
#include <iostream>

Client::Client(const string& nume) : nume(nume) {}

Client::~Client(){
    cout<<"\nClient destructor was called\n";
}

void Client::adaugaCont(const ContBancar& cont) {
    conturi.push_back(cont);
}

void Client::afiseazaConturi() const {
    cout << "Conturi pentru clientul " << nume << ":\n";
    for (const auto& cont : conturi) {
        cont.afiseazaDetalii();
    }
}

const string& Client::getNume() const {
    return nume;
}
