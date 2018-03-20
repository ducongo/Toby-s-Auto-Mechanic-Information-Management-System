#include "VehicleArray.h"
#include "Vehicle.h"
#include "defs.h"

/*
 * Constructor:  VehicleArray
 * --------------------
 * creates a VehicleArray
 */
VehicleArray::VehicleArray(){}

/*
 * deconstructor:  ~VehicleArray
 * --------------------
 * destroys the VehicleArray and deletes all the elements in the elements array
 */
VehicleArray::~VehicleArray(){
  for (int i = 0; i < this->size; i++) {
    delete this->elements[i];
  }
}

/*
 * Function:  add
 * --------------------
 * adds a vehicle to its Vehicle array, elements
 *
 * v: Vehicle pointer
 *
 *  returns: int 0 if successful or 1 if not
 */
int VehicleArray::add(Vehicle* v){

  if (this->size < MAX_VEHICLES){
    this->elements[this->size] = v;
    this->size++;
    return 0;
  }
  return 1;
}

/*
 * Function:  get
 * --------------------
 * gets the element in the elements array at index i
 *
 * i: int
 *
 *  returns: Vehicle pointer
 */
Vehicle* VehicleArray::get(int i){
  return this->elements[i];
}

int VehicleArray::getSize(){ return this->size; }
