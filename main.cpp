#include <iostream>
#include "Client.hpp"
#include "ContBancar.hpp"
#include "Banca.hpp"

int main() {


    Banca *banca1 = new Banca("BRD");
    
    // Creăm un client
    Client *client1 = new Client("Ion Popescu");

    // Creăm câteva conturi pentru acest client
    ContBancar *cont1 = new ContBancar("Cont1", 1000);
    ContBancar *cont2 = new ContBancar("Cont2", 500);

    // banca1->adaugaClient(*client1);
    cout<<endl;
    // Adăugăm conturile la client
    client1->adaugaCont(*cont1);
    client1->adaugaCont(*cont2);
    banca1->adaugaClient(*client1);
    banca1->afiseazaDetaliiClienti();
    cout<<endl;
// client1->afiseazaConturi();
    delete banca1;
    // Afișăm conturile clientului
    //client1->afiseazaConturi();

    // Depunem și retragem sume din conturi
    // cont1->depune(200);
    // cont2->retrage(50);

    // Afișăm conturile după operațiuni
    //client1->afiseazaConturi();

    return 0;
}
