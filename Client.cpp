#include "Client.hpp"
#include <iostream>

Client::Client(){}

Client::Client(const string& nume) : nume(nume) {}

Client::~Client(){
    cout<<"\nClient destructor was called\n";
}


Client::Client(const Client& other) : nume(other.nume), conturi(other.conturi) {
    cout<<"Client copy constructor was called\n";
}

Clint::Client(const Client other)

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


Client& Client::operator=(const Client& other) {
    // Check for self-assignment
    if (this == &other) {
        return *this;
    }
    
    // Copy the name
    nume = other.nume;

    // Clear the existing conturi and copy the new ones
    conturi.clear();
    for (const auto& cont : other.conturi) {
        conturi.push_back(cont);  // Deep copy of each ContBancar
    }
   


    return *this;
}


BusinessClient::BusinessClient(const string& nume, const string& businessIDNumber) : Client(nume), businessIDNumber(businessIDNumber){
    cout << "BusinessClient constructor was called\n";
}

IndividualClient::IndividualClient(const string& nume, const string& CNP) : Client(nume), CNP(CNP){
    cout << "IndividualClient constructor was called\n";
}