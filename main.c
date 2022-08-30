#include <stdio.h>
#include <stdlib.h>
#include "./include/models.h"
#include "./src/customer/customer.h"
#include "./src/log/log.h"
#include "./src/mock/mock.h"

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
    generateMockData(p_customers);

    fclose(p_customers);
    return EXIT_SUCCESS;
}