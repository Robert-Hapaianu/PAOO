#ifndef CONTBANKAR_HPP
#define CONTBANKAR_HPP

#include <string>
#include <iostream>


using namespace std;

class ContBancar {
private:
    string numeCont;
    double sold;

public:
    ContBancar();
    ContBancar(const string& numeCont, double sold);
    ContBancar(const ContBancar& other);
    ~ContBancar();
    void depune(double suma);
    void retrage(double suma);
    void afiseazaDetalii() const;
    
};

#endif