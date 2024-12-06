#include "Client.hpp"
#include <iostream>

Client::Client() : nume(""), conturi(new shared_ptr<ContBancar>[numElements]) {}

Client::Client(const string& nume) : nume(nume), conturi(new shared_ptr<ContBancar>[numElements]) {}

Client::~Client() { delete[] conturi; std::cout << "\nClient destructor was called\n"; }

Client::Client(const Client& other) : nume(other.nume), conturi(new shared_ptr<ContBancar>[other.numElements]), numElements(other.numElements) { 
    cout << "Client copy constructor was called\n"; 
    for (int i = 0; i < numElements; ++i) { 
        conturi[i] = other.conturi[i]; 
    } 
}

void Client::adaugaCont(const shared_ptr<ContBancar>& cont) { 
    if (numElements >= sizeof(conturi) / sizeof(conturi[0])) {
        shared_ptr<ContBancar>* newConturi = new shared_ptr<ContBancar>[numElements + 1];
        for (int i = 0; i < numElements; ++i) {
            newConturi[i] = conturi[i];
        }
        delete[] conturi;
        conturi = newConturi;
    }
    conturi[numElements++] = cont;
}

void Client::afiseazaConturi() const {
    cout << "Conturi pentru clientul " << nume << ":\n"; 
    for (int i = 0; i < numElements; i++) { 
        conturi[i]->afiseazaDetalii(); 
    } 
} 

const string& Client::getNume() const { return nume; } 

Client& Client::operator=(const Client& other) { 
    if (this == &other) { return *this; } 
    nume = other.nume; 
    delete[] conturi;
    conturi = new shared_ptr<ContBancar>[other.numElements];
    numElements = other.numElements;
    for (int i = 0; i < numElements; ++i) { 
        conturi[i] = other.conturi[i]; 
    }
    return *this; 
} 

BusinessClient::BusinessClient(const string& nume, const string& businessIDNumber) : 
    Client(nume), businessIDNumber(businessIDNumber) { 
        cout << "BusinessClient constructor was called\n"; 
} 

IndividualClient::IndividualClient(const string& nume, const string& CNP) : 
    Client(nume), CNP(CNP) { 
        cout << "IndividualClient constructor was called\n"; 
} 

int Client::getNumElements() const { return numElements; }
