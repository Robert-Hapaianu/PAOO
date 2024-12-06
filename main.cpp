// #include <iostream>
// #include "Client.hpp"
// #include "ContBancar.hpp"
// #include "Banca.hpp"

// int main() {


    // Banca *banca1 = new Banca("BRD");
    

    // Client *client1 = new BusinessClient("Ion Popescu", "2dqw2341"); 
    // IndividualClient *client2 = new IndividualClient("Fistis Ciprian", "5030526350069");

    // ContBancar *cont1 = new ContBancar("Cont1", 1000);
    // ContBancar *cont2 = new ContBancar("Cont2", 500);
    // ContBancar *cont3 = new ContBancar("Cont3", 10030);
    // ContBancar *cont4 = new ContBancar("Cont4", 50210);
    // // ContBancar *cont5 = new ContBancar(*cont1);  // copy constructor
    // ContBancar *cont6 = new ContBancar(std::move(*cont2));



    // cout<<endl;
    
    // client1->adaugaCont(*cont1);
    // cout<<"\n************************************\n";
    // client1->adaugaCont(*cont2);
    // cout<<"\n************************************\n";
    // banca1->adaugaClient(*client1);

    // client2->adaugaCont(*cont3);
    // cout<<"\n************************************\n";
    // client2->adaugaCont(*cont4);
    // cout<<"\n************************************\n";
    // // client2->adaugaCont(*cont5);
    // // cout<<"\n************************************\n";
    // client2->adaugaCont(*cont6);

    // banca1->adaugaClient(*client2);


    // banca1->afiseazaDetaliiClienti();


    // Banca *banca2 = new Banca("ING");

    // Client *client3 = new Client();

    // ContBancar *cont7 = new ContBancar();
    // ContBancar *cont8 = new ContBancar();

    // client2->adaugaCont(*cont7);
    // cout<<"\n************************************\n";
    // client2->adaugaCont(*cont8);
    // cout<<"\n************************************\n";


    // *client3 = *client1;
    // banca2->adaugaClient(*client3);
    // cout<<"\n___________________________________________\n";
    // banca2->afiseazaDetaliiClienti();

    // delete banca1;
    // delete banca2;








    // Banca *banca1 = new Banca("BRD");
    

    // Client *client1 = new Client("Ion Popescu"); 
    // Client *client2 = new Client();

    // ContBancar *cont1 = new ContBancar("Cont1", 1000);
    // ContBancar *cont2 = new ContBancar("Cont2", 50210);
    // // ContBancar *cont3 = new ContBancar("Cont3", 10030);
    // // ContBancar *cont4 = new ContBancar("Cont4", 50210);
    // client1->adaugaCont(*cont1);
    // cout<<"\n*\n";
    // client1->adaugaCont(*cont2);
    // cout<<"\n*\n";

    // *client2 = *client1;

    // client1->afiseazaConturi();
    // client2->afiseazaConturi();



    // cout<<endl;
    
    // client1->adaugaCont(*cont1);
    // cout<<"\n*\n";
    // client1->adaugaCont(*cont2);
    // cout<<"\n*\n";
    // banca1->adaugaClient(*client1);

    // cout<<"\n*\n";
    // client2->adaugaCont(*cont3);
    
    // client2->adaugaCont(*cont4);

    // client2->adaugaCont(*cont1);

    // // delete client1;


    // banca1->adaugaClient(*client2);


    // banca1->afiseazaDetaliiClienti();


//     return 0;
// }



// #include <iostream>
// #include <memory>
// #include "Client.hpp"
// #include "ContBancar.hpp"
// #include "Banca.hpp"

// int main() {
//     auto banca1 = make_unique<Banca>("BRD");
//     auto banca2 = make_unique<Banca>("ING");

//     shared_ptr<Client> client1 = make_shared<BusinessClient>("Ion Popescu", "2dqw2341");
//     shared_ptr<Client> client2 = make_shared<IndividualClient>("Fistis Ciprian", "5030526350069");

//     shared_ptr<ContBancar> cont1 = make_shared<ContBancar>("Cont1", 1000);
//     shared_ptr<ContBancar> cont2 = make_shared<ContBancar>("Cont2", 500);
//     shared_ptr<ContBancar> cont3 = make_shared<ContBancar>("Cont3", 10030);
//     shared_ptr<ContBancar> cont4 = make_shared<ContBancar>("Cont4", 50210);
//     shared_ptr<ContBancar> cont6 = make_shared<ContBancar>(std::move(*cont2));

//     client1->adaugaCont(cont1);
//     client1->adaugaCont(cont2);
//     client1->adaugaCont(cont3);

//     client2->adaugaCont(cont4);
//     client2->adaugaCont(cont6);

//     banca1->adaugaClient(client1);
//     banca1->adaugaClient(client2);

//     banca2->adaugaClient(client1);
//     banca2->adaugaClient(client2);

//     std::cout << "\n\n\nDetails of Banca1 clients before deleting Banca1:" << std::endl;
//     banca1->afiseazaDetaliiClienti();

//     std::cout << "\n\n\nDetails of Banca2 clients before deleting Banca1:" << std::endl;
//     banca2->afiseazaDetaliiClienti();

//     // Delete Banca1 and observe that clients are not fully deleted since they're shared with Banca2
//     banca1.reset();
//     client1.reset();

//     std::cout << "\nBanca1 deleted.\n";

//     std::cout << "\n\n\nDetails of Banca2 clients after deleting Banca1:" << std::endl;
//     banca2->afiseazaDetaliiClienti();

//     return 0;
// }


#include <iostream>
#include <memory>
#include "Client.hpp"
#include "ContBancar.hpp"
#include "Banca.hpp"

int main() {
    unique_ptr<Banca> banca1 = make_unique<Banca>("BRD");
    unique_ptr<Banca> banca2 = make_unique<Banca>("ING");

    shared_ptr<Client> client1 = make_shared<BusinessClient>("Ion Popescu", "2dqw2341");
    shared_ptr<Client> client2 = make_shared<IndividualClient>("Fistis Ciprian", "5030526350069");

    shared_ptr<ContBancar> cont1 = make_shared<ContBancar>("Cont1", 1000);
    shared_ptr<ContBancar> cont2 = make_shared<ContBancar>("Cont2", 500);

    client1->adaugaCont(cont1);
    client1->adaugaCont(cont2);

    client2->adaugaCont(cont1); // Both clients share cont1

    banca1->adaugaClient(client1);
    banca1->adaugaClient(client2);

    banca2->adaugaClient(client1); // client1 is shared between two banks

    cout << "\n\n\nBefore removing client1:" << endl;
    banca1->afiseazaDetaliiClienti();
    cout << "\n*******************************************************\n";
    banca2->afiseazaDetaliiClienti();



    cout << "\n\n\n\nRemoving client1 from Banca1" << endl;
    banca1->removeClient(client1);

    cout << "After first reset:" << endl;
    // banca1->cleanupClients();
    // banca2->cleanupClients();
    banca1->afiseazaDetaliiClienti();
    cout << "\n*******************************************************\n";
    banca2->afiseazaDetaliiClienti();

    


    cout << "\n\n\n\nRemoving client1 from Banca2" << endl;
    // banca1->removeClient(client1);
    banca2->removeClient(client1);
    // client1.reset(); // Decrement reference count

    cout << "After second reset:" << endl;
    // banca1->cleanupClients();
    // banca2->cleanupClients();
    banca1->afiseazaDetaliiClienti();
    cout << "\n*******************************************************\n";
    banca2->afiseazaDetaliiClienti();





    return 0;
}


