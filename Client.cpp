#include "Client.hpp" 
#include <iostream> 


Client::Client() : nume(""), conturi(new ContBancar[numElements]){}

Client::Client(const string& nume) : nume(nume), conturi(new ContBancar[numElements]){}

Client::~Client() { delete[] conturi; std::cout << "\nClient destructor was called\n"; }

Client::Client(const Client& other) : nume(other.nume), conturi(new ContBancar[numElements]), numElements(other.numElements) { 
    cout << "Client copy constructor was called\n"; 
    for (int i = 0; i < numElements; ++i) { 
        conturi[i] = other.conturi[i]; 
    } 
}
    
void Client::adaugaCont(const ContBancar& cont) {
    // Check if the current array is full
    if (numElements >= sizeof(conturi) / sizeof(conturi[0])) {
        // Allocate a new array with one more element
        ContBancar* newConturi = new ContBancar[numElements + 1];

        // Copy existing elements to the new array
        for (int i = 0; i < numElements; ++i) {
            newConturi[i] = conturi[i];
        }

        // Delete the old array
        delete[] conturi;

        // Update the array pointer to the new array
        conturi = newConturi;
    }

    // Add the new element to the array
    conturi[numElements++] = cont;
}


void Client::afiseazaConturi() const {
    cout << "Conturi pentru clientul " << nume << ":\n"; 
    for (int i = 0; i < numElements; i++) { 
        conturi[i].afiseazaDetalii(); 
    } 
} 

const string& Client::getNume() const { return nume; } 

Client& Client::operator=(const Client& other) { 
    // Check for self-assignment 
    if (this == &other) { return *this; } 
    // Copy the name 
    nume = other.nume; 
    // Clear the existing conturi and copy the new ones 
    // for (int i = 0; i <= numElements; i++) { 
    // conturi[i]->delete(); 
    // } delete[] conturi; 
    this->numElements = 0;
    for (int i = 0; i < other.getNumElements(); i++) { 
        // conturi[i].getNumeCont() = other.conturi[i].getNumeCont(); 
        // Deep copy of each ContBancar 
        // conturi[i].setSold(other.conturi[i].getSold()); 
        adaugaCont(other.conturi[i]); 
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