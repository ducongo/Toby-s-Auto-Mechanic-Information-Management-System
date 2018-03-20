#include "Shop.h"
#include "defs.h"


/*
 * Function:  addCustomer
 * --------------------
 * adds a customer to its customer array, customers
 *
 * c: Customer pointer
 *
 *  returns: int C_OK if successful or C_NOK if not
 */
int Shop::addCustomer(Customer* c) { return customers.add(c); }

/*
 * Function:  getCustomer
 * --------------------
 * returns a Customer in the specify index in the elemt array
 *
 * i: int
 *
 *  returns: Customer if gound else returns 0
 */
Customer& Shop::getCustomer(int i)  { return (*customers.get(i)); }

/*
 * Function:  getCustomers
 * --------------------
 * returns a customer pointer in the specify index in the elemt array
 *
 *  returns: CustomerArray
 */
CustomerArray& Shop::getCustomers() { return (customers); }
