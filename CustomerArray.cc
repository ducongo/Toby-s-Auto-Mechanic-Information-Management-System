#include "CustomerArray.h"
#include "Customer.h"
#include "defs.h"

/*
 * Constructor:  CustomerArray
 * --------------------
 * creates a customer a sets the size attribute to 0
 */
CustomerArray::CustomerArray(){  this->size = 0; }

/*
 * deconstructor:  Customer
 * --------------------
 * destroys the CustomerArray and deletes all the elements in the elements array
 */
CustomerArray::~CustomerArray(){

  for (int i = 0; i < this->size; i++) {
    delete this->elements[i];
    }
}

/*
 * Function:  add
 * --------------------
 * adds a customer to the elements array
 *
 * c: Customer pointer
 *
 *  returns: int C_OK if successful or C_NOK if not
 */
int CustomerArray::add(Customer* c){

  if (this->size < MAX_CUSTOMERS){
    this->elements[this->size] = c;
    this->size++;
    return C_OK;
  }

  return C_NOK;
}

/*
 * Function:  get
 * --------------------
 * returns a customer pointer in the specify index in the elemt array
 *
 * index: int
 *
 *  returns: Customer if gound else returns 0
 */
Customer* CustomerArray::get(int index){

  if (index < MAX_CUSTOMERS){
    return this->elements[index];
  }

  return 0;
}

/*
 * Function:  getSize
 * --------------------
 * returns the size of the customer array
 *
 *  returns: int
 */
int CustomerArray::getSize(){ return this->size; }
