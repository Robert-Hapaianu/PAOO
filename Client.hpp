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
    Client(const string& nume);
    ~Client();
    void adaugaCont(const ContBancar& cont);
    void afiseazaConturi() const;
    const string& getNume() const;
};

#endif // CLIENT_HPP
