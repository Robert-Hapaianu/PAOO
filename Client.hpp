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

#endif // CLIENT_HPP
