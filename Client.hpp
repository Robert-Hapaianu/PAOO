#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <string>
#include <vector>
#include <memory>
#include "ContBancar.hpp"
using namespace std;

class Client {
private:
    string nume;
    int numElements = 0;
    shared_ptr<ContBancar>* conturi; // Use shared_ptr for conturi

public:
    Client();
    Client(const string& nume);
    ~Client();
    Client(const Client& other);
    void adaugaCont(const shared_ptr<ContBancar>& cont);
    void afiseazaConturi() const;
    const string& getNume() const;
    Client& operator=(const Client& other);
    int getNumElements() const;
};

class BusinessClient : public Client {
private:
    string businessIDNumber;
public:
    BusinessClient();
    BusinessClient(const string& nume, const string& businessIDNumber);
};

class IndividualClient : public Client {
private:
    string CNP;
public:
    IndividualClient();
    IndividualClient(const string& nume, const string& CNP);
};

#endif // CLIENT_HPP
