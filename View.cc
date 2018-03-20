#include <sstream>
#include <iomanip>
#include <iostream>
using namespace std;

#include "View.h"
#include "CustomerArray.h"
#include "Customer.h"
#include "VehicleArray.h"
#include "Vehicle.h"

/*
 * Function:  mainMenu
 * --------------------
 * prints the main menu  of the shop
 *
 * choice: int&
 *
 *  returns: void
 */
void View::mainMenu(int& choice) {
    string str;

    choice = -1;

    cout<< "\n\n\n         **** Toby's Auto Mechanic Information Management System ****\n\n";
    cout<< "                                 MAIN MENU\n\n";
    cout<< "        1. Print Customer Database\n\n";
    cout<< "        0. Exit\n\n";

    while (choice < 0 || choice > 1) {
        cout << "Enter your selection:  ";
        choice = readInt();
    }

    if (choice == 0) { cout << endl; }
}

/*
 * Function:  printCustomers
 * --------------------
 * prints all the customers in an CustomerAttay
 *
 * arr: CustomerArray&
 *
 *  returns: void
 */
void View::printCustomers(CustomerArray& arr) {
    cout << endl << "CUSTOMERS: " << endl << endl;


    for (int i = 0; i < arr.getSize(); i++) {

        Customer* cust = arr.get(i);
        ostringstream name;
        name << cust->getFname() << " " << cust->getLname();

        cout << "Customer ID " << cust->getId() << endl << endl
             << "    Name: " << setw(40) << name.str() << endl
             << "    Address: " << setw(37) << cust->getAddress() << endl
             << "    Phone Number: " << setw(32) <<  cust->getPhoneNumber() << endl;

        if (cust->getNumVehicles() > 0) {
             cout << endl << "    " << cust->getNumVehicles()
                  << " vehicle(s): " << endl << endl;
        }
        //cout<<"1 NO ERRORS SO FAR *****************"<<endl;
        VehicleArray& varr = cust->getVehicles();
        //cout<<"1 NO ERRORS SO FAR *****************"<<endl;
        for (int j = 0; j < varr.getSize(); j++) {
            //cout<<"Loop 1 NO ERRORS SO FAR *****************"<<endl;
            Vehicle* v = varr.get(j);
            //cout<<"Loop 2 NO ERRORS SO FAR *****************"<<endl;
            ostringstream make_model;
            //cout<<"Loop 3 NO ERRORS SO FAR *****************"<<endl;
            make_model << v->getMake() << " " << v->getModel();
            //cout<<"Loop 3 NO ERRORS SO FAR *****************"<<endl;
            cout << "\t" << j+1 << ") " << setw(7) << v->getColour() << " "
                 << v->getYear() << " " << setw(17) << make_model.str() << " ("
                 << v->getMilage() << "km)" << endl;
            //cout<<"Loop 4 NO ERRORS SO FAR *****************"<<endl;
        }

        cout << endl << endl;
    }
    //*/
}

/*
 * Function:  pause
 * --------------------
 * waits to see if the user whats to continue along the pororam
 *
 *  returns: void
 */
void View::pause() {
    string str;

    cout << "Press enter to continue...";
    getline(cin, str);
}

/*
 * Function:  readInt
 * --------------------
 * reads the users input
 *
 *  returns: int
 */
int View::readInt() {
    string str;
    int    num;

    getline(cin, str);
    stringstream ss(str);
    ss >> num;

    return num;
}
