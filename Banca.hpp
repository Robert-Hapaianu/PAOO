#ifndef BANCA_HPP
#define BANCA_HPP

#include <vector>
#include <memory>
#include "Client.hpp"
#include <iostream>
using namespace std;

class Banca {
private:
    string nume;
    vector<shared_ptr<Client>> clienti; // Use shared_ptr for clients

public:
    Banca(const string& nume);
    ~Banca();
    void adaugaClient(const shared_ptr<Client>& client);
    void afiseazaDetaliiClienti() const;
    void cleanupClients(); // Method to remove nullptr entries
    void removeClient(const shared_ptr<Client>& client); // Method to remove specific client
};

#endif // BANCA_HPP
