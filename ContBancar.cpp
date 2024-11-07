#include "ContBancar.hpp"

ContBancar::ContBancar(const string& numeCont, double sold) : numeCont(numeCont), sold(sold) {}

ContBancar::~ContBancar(){
    cout<<"\nContBancar destructor was called\n";
}

void ContBancar::depune(double suma) {
    sold += suma;
    cout << "Depunere de " << suma << " in contul " << numeCont << ". Sold actual: " << sold << endl;
}

void ContBancar::retrage(double suma) {
    if (sold >= suma) {
        sold -= suma;
        cout << "Retragere de " << suma << " din contul " << numeCont << ". Sold actual: " << sold << endl;
    } else {
        cout << "Fonduri insuficiente pentru retragere!" << endl;
    }
}

void ContBancar::afiseazaDetalii() const {
    cout << "Cont: " << numeCont << " | Sold: " << sold << endl;
}
