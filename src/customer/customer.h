#include "../../include/models.h"

#ifndef CUSTOMER_H
#define CUSTOMER_H

void create_customer(Customer c, FILE *p_customer);
void update_customer_balance(int cust_id, FILE *p_customer);

#endif