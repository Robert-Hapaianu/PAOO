#include "Banca.hpp"
#include <algorithm>

Banca::Banca(const string& nume) : nume(nume) {}

Banca::~Banca() {
    cout << "\nBanca destructor was called\n";
    
    // No need to manually delete clients, shared_ptr handles it.
}

void Banca::adaugaClient(const shared_ptr<Client>& client) {
    clienti.push_back(client);
}

void Banca::afiseazaDetaliiClienti() const {
    cout << "Detalii clienti:\n";
    for (const auto& client : clienti) {
        if (client) {
            cout << "Client: " << client->getNume() << "\n";
            client->afiseazaConturi();
        }
    }
}

void Banca::cleanupClients() {
    clienti.erase(remove_if(clienti.begin(), clienti.end(),
                 [](const shared_ptr<Client>& client) { return client == nullptr; }),
                 clienti.end());
}

void Banca::removeClient(const shared_ptr<Client>& client) {
    clienti.erase(remove_if(clienti.begin(), clienti.end(),
                 [&client](const shared_ptr<Client>& c) { return c == client; }),
                 clienti.end());
}
