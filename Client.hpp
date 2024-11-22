#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <string>
#include <vector>
#include "ContBancar.hpp"

using namespace std;

class Client {
private:
    string nume;
    vector<ContBancar> conturi;

public:
    Client();
    Client(const string& nume);
    ~Client();
    Client(const Client& other); // Copy constructor
    void adaugaCont(const ContBancar& cont);
    void afiseazaConturi() const;
    const string& getNume() const;
    Client& operator=(const Client& other); // Assignment operator
};

class BusinessClient: public Client{
    private:
    string businessIDNumber;
    public:
    BusinessClient();
    BusinessClient(const string& nume, const string& businessIDNumber);
};

class IndividualClient: public Client{
    private:
    string CNP;
    public:
    IndividualClient();
    IndividualClient(const string& nume, const string& CNP);
};

#endif // CLIENT_HPP
