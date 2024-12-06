#include "ContBancar.hpp"

ContBancar::ContBancar(){}

ContBancar::ContBancar(const string& numeCont, double sold) : numeCont(numeCont), sold(sold) {}

// Copy constructor - creates a new ContBancar with the same data
ContBancar::ContBancar(const ContBancar& other)
    : numeCont(other.numeCont), sold(other.sold) {
    // Here, we copy the values of numeCont and sold from the other object
}

// Move constructor
ContBancar::ContBancar(ContBancar&& other) noexcept 
    : numeCont(move(other.numeCont)), sold(other.sold) {
    other.sold = 0.0; // Reset the moved-from object's state
}


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

string ContBancar::getNumeCont() {
    return numeCont;
}

double ContBancar::getSold() {
    return sold;
}

void ContBancar::setSold(double sold) {
    this->sold = sold;
}

ContBancar& ContBancar::operator=(const ContBancar& other) { 
    if (this != &other) {  // Self-assignment check 
        numeCont = other.numeCont; 
        sold = other.sold; 
    } 
    cout << "Copy assignment operator called\n"; 
    return *this; 
}