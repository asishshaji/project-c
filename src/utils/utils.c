#include <stdio.h>

int get_number_of_lines(FILE *p_file)
{
    rewind(p_file);
    int count = 0;
    char buffer[120];
    while (fgets(buffer, 120, p_file) != NULL)
    {
        count++;
    }

    return count;
}
