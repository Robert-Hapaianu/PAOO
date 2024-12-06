#include <iostream>
#include "Client.hpp"
#include "ContBancar.hpp"
#include "Banca.hpp"

int main() {


    Banca *banca1 = new Banca("BRD");
    

    Client *client1 = new BusinessClient("Ion Popescu", "2dqw2341"); 
    IndividualClient *client2 = new IndividualClient("Fistis Ciprian", "5030526350069");

    ContBancar *cont1 = new ContBancar("Cont1", 1000);
    ContBancar *cont2 = new ContBancar("Cont2", 500);
    ContBancar *cont3 = new ContBancar("Cont3", 10030);
    ContBancar *cont4 = new ContBancar("Cont4", 50210);
    ContBancar *cont5 = new ContBancar(*cont1);  // copy constructor
    ContBancar *cont6 = new ContBancar(std::move(*cont2));

    cout<<"BRUH";


    cout<<endl;
    
    client1->adaugaCont(*cont1);
    cout<<"\n************************************\n";
    client1->adaugaCont(*cont2);
    cout<<"\n************************************\n";
    banca1->adaugaClient(*client1);

    client2->adaugaCont(*cont3);
    cout<<"\n************************************\n";
    client2->adaugaCont(*cont4);
    cout<<"\n************************************\n";
    client2->adaugaCont(*cont5);
    cout<<"\n************************************\n";
    client2->adaugaCont(*cont6);

    banca1->adaugaClient(*client2);


    banca1->afiseazaDetaliiClienti();


    Banca *banca2 = new Banca("ING");

    Client *client3 = new Client();

    ContBancar *cont7 = new ContBancar();
    ContBancar *cont8 = new ContBancar();

    client2->adaugaCont(*cont7);
    cout<<"\n************************************\n";
    client2->adaugaCont(*cont8);
    cout<<"\n************************************\n";


    *client3 = *client1;
    banca2->adaugaClient(*client3);
    cout<<"\n___________________________________________\n";
    banca2->afiseazaDetaliiClienti();

    delete banca1;
    delete banca2;


    return 0;
}
