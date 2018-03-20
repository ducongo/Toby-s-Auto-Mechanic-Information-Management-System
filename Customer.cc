#include <iostream>
using namespace std;
#include "Customer.h"

/*
 * Constructor:  Customer
 * --------------------
 * creates a customer
 *
 *  firstName: string
 *  lastName: string
 *  address: string
 *  phoneNumber: string
 */
Customer::Customer(string firstName, string lastName, string address, string phoneNumber){

  this->firstName = firstName;
  this->lastName = lastName;
  this->address = address;
  this->phoneNumber = phoneNumber;
  this->id = Customer::nextId;
  Customer::nextId += 1;

}


int Customer::nextId = 0; // initializing static class member

/*
 * Function:  getID
 * --------------------
 * returns the customer's id
 *
 *  returns: int
 */
int Customer::getId(){  return this->id; }

/*
 * Function:  getFname
 * --------------------
 * returns the first name of a customer
 *
 *  returns: string
 */
string Customer::getFname(){ return this->firstName; }

/*
 * Function:  getLname
 * --------------------
 * returns the last name of a customer
 *
 *  returns: string
 */
string Customer::getLname(){  return this->lastName; }

/*
 * Function:  getAddress
 * --------------------
 * returns the address of a customer
 *
 *  returns: string
 */
string Customer::getAddress(){  return this->address; }

/*
 * Function:  getPhoneNumber
 * --------------------
 * returns the phone number of a customer
 *
 *  returns: string
 */
string Customer::getPhoneNumber(){  return this->phoneNumber; }

/*
 * Function:  getVehicles
 * --------------------
 * returns the vehicles of a customer
 *
 *  returns: VehicleArray&
 */
VehicleArray& Customer::getVehicles(){  return (this->vehicles); }

/*
 * Function:  addVehicle
 * --------------------
 * adds a vehicle object to the customer vehicle array
 *
 *  v: pointer of type Vehicle
 *
 *  returns: int 
 */
int Customer::addVehicle(Vehicle* v){ return this->vehicles.add(v); }

/*
 * Function:  getNumVehicles
 * --------------------
 * gets the number of vehicles a customer has
 *
 *  returns: int
 */
int Customer::getNumVehicles(){ return this->vehicles.getSize(); }
