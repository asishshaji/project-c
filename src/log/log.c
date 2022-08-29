#include <stdio.h>

void LOG_INFO(char *message)
{
    printf("[i] %s\n", message);
}

void LOG_ERR(char *message)
{
    printf("[!] %s\n", message);
}