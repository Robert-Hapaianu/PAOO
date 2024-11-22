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
    banca1->adaugaClient(*client2);


    banca1->afiseazaDetaliiClienti();


    // Banca *banca2 = new Banca("ING");

    // Client *client2 = new Client();

    // ContBancar *cont3 = new ContBancar();
    // ContBancar *cont4 = new ContBancar();

    // client2->adaugaCont(*cont3);
    // cout<<"\n************************************\n";
    // client2->adaugaCont(*cont4);
    // cout<<"\n************************************\n";


    // *client2 = *client1;
    // banca2->adaugaClient(*client2);
    // cout<<"\n___________________________________________\n";
    // banca2->afiseazaDetaliiClienti();

    // delete banca1;
    // delete banca2;


    return 0;
}
