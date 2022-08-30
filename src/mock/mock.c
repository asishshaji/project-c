#include <stdio.h>
#include <stdlib.h>

void generateMockData(FILE *fp)
{
    rewind(fp);
    for (int i = 0; i < 1000; i++)
    {
        fprintf(fp, "%d,%s,%f,%s\n", i, "1", 1.0, "ASD");
    }
}