#include <stdio.h>
#include <stdlib.h>
#include "./include/constants.h"
#include "./include/models.h"
#include "./src/customer/customer.h"
#include "./src/log/log.h"

int main()
{
    FILE *p_customers;

    p_customers = fopen(CUSTOMER_FILE, "r+");
    if (!p_customers)
    {
        LOG_ERR("error opening customer file");
        return EXIT_FAILURE;
    }
    LOG_INFO("Loaded customers file");

    Customer c = {.name = "Asish", .locationCode = "TRV"};
    create_customer(c, p_customers);

    return EXIT_SUCCESS;
}