#include <iostream>
using namespace std;
#include "Vehicle.h"

/*
 * Constructor:  Vehicle
 * --------------------
 * creates a Vehicle and sets all its member variables
 *
 * make: string
 * model: string
 * colour: string
 * year: int
 * mileage: int
 */
Vehicle::Vehicle(string make, string model, string colour, int year, int mileage){

  this->make = make;
  this->model = model;
  this->colour = colour;
  this->year = year;
  this->mileage = mileage;
}

/*
 * Function:  getMake
 * --------------------
 * gets the make
 *
 *  returns: string
 */
string Vehicle::getMake(){ return this->make; }

/*
 * Function:  getModel
 * --------------------
 * gets the model
 *
 *  returns: string
 */
string Vehicle::getModel(){ return this->model; }

/*
 * Function:  getColour
 * --------------------
 * gets the colour
 *
 *  returns: string
 */
string Vehicle::getColour(){ return this->colour; }

/*
 * Function:  getYear
 * --------------------
 * gets the year
 *
 *  returns: int
 */
int Vehicle::getYear(){ return this->year; }

/*
 * Function:  getMilage
 * --------------------
 * gets the mileage
 *
 *  returns: int
 */
int Vehicle::getMilage(){ return this->mileage; }
