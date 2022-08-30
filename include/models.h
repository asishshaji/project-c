#ifndef MODELS_H
#define MODELS_H
#define CUSTOMER_FILE "data/customer.csv"

typedef struct
{
    int id;
    char *name;
    float balance;
    char locationCode[3];

} Customer;

typedef struct
{
    int id;
    float amount;
    char *from;
    char *to;
} Transaction;

#endif