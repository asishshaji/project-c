#include "../../include/models.h"
#include "../utils/utils.h"

void create_customer(Customer c, FILE *p_customer)
{
    fseek(p_customer, 0, SEEK_END);
    int last_id = get_number_of_lines(p_customer);
    c.id = last_id + 1;
    c.balance = 0.0;

    fprintf(p_customer, "%d,%s,%f,%s\n", c.id, c.name, c.balance, c.locationCode);
}

void update_customer_balance(int cust_id, FILE *p_customer)
{
}