#include "ShopController.h"

/*
 * Constructor:  ShopController
 * --------------------
 * creates a ShopController and calls initCustomers() to populate data
 */
ShopController::ShopController() { initCustomers(); }

/*
 * Function:  launch
 * --------------------
 * starts the application and calls the view to display the menu
 *
 *  returns: void
 */
void ShopController::launch() {

    int choice;

    while (1) {
        choice = -1;
        view.mainMenu(choice);

        if (choice == 1) {
            view.printCustomers(mechanicShop.getCustomers());
            view.pause();
        } /*else if (choice == 2) {

        } else if (choice == 3) {

        } else if (choice == 4) {

        } ... */

        else {
            break;
        }
    }
}


/*
 * Function:  initCustomers
 * --------------------
 * dynamically creates customers and vehicles and populates the Shop (mechanicShop)
 *
 *  returns: void
 */
void ShopController::initCustomers() {

    //add data fill here
    Customer* c1 = new Customer("Maurice", "Mooney", "1 Bayshore Dr.", "(613)123-7456");
    Customer* c2 = new Customer("Abigail","Atwood", "3245 Rideau St.", "(613)234-9677");
    Customer* c3 = new Customer("Brook","Banding", "75 Bronson Ave.", "(613)456-2345");
    Customer* c4 = new Customer("Ethan","Esser", "425 O'Connor St.", "(613)432-7622");
    Customer* c5 = new Customer("Eve","Engram", "1440 Station Blv.", "(613)562-3214");
    Customer* c6 = new Customer("Victor","Vanvalkenburg", "1235 Bank St.", "(613)478-2156");

    Vehicle* v1 = new Vehicle("Ford", "Fiesta", "Red", 2007, 100000);
    Vehicle* v2 = new Vehicle("Subaru", "Forester", "Green", 2016, 40000);
    Vehicle* v3 = new Vehicle("Honda", "Accord", "White", 2018, 5000);
    Vehicle* v4 = new Vehicle("Volkswagen", "Beetle", "White", 1972, 5000);
    Vehicle* v5 = new Vehicle("Toyota", "Camry", "Black", 2010, 50000);
    Vehicle* v6 = new Vehicle("Toyota", "Corolla", "Green", 2013, 80000);
    Vehicle* v7 = new Vehicle("Toyota", "Rav4", "Gold", 2015, 20000);
    Vehicle* v8 = new Vehicle("Toyota", "Prius", "Blue", 2017, 2000);
    Vehicle* v9 = new Vehicle("GM", "Envoy", "Purple", 2012, 60000);
    Vehicle* v10 = new Vehicle("GM", "Escalade", "Black", 2016, 40000);
    Vehicle* v11 = new Vehicle("GM", "Malibu", "Red", 2015, 20000);
    Vehicle* v12 = new Vehicle("GM", "Trailblazer", "Orange", 2012, 90000);
    Vehicle* v13 = new Vehicle("Testla", "Model S", "Black", 2015, 2000);

    c1->addVehicle(v1);
    c2->addVehicle(v2);
    c3->addVehicle(v3);
    c3->addVehicle(v4);
    c4->addVehicle(v5);
    c4->addVehicle(v6);
    c4->addVehicle(v7);
    c5->addVehicle(v8);
    c5->addVehicle(v9);
    c5->addVehicle(v10);
    c5->addVehicle(v11);
    c5->addVehicle(v12);
    c6->addVehicle(v13);

    this->mechanicShop.addCustomer(c1);
    this->mechanicShop.addCustomer(c2);
    this->mechanicShop.addCustomer(c3);
    this->mechanicShop.addCustomer(c4);
    this->mechanicShop.addCustomer(c5);
    this->mechanicShop.addCustomer(c6);


}
