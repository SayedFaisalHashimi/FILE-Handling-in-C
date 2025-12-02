#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[290];          // buffer to store file content
    FILE *fp = NULL;        // file pointer initialization

    // Open file in read mode
    fp = fopen("abc.txt", "r");
    if (fp == NULL)
    {
        printf("Error: Could not open file. End of program.\n");
        exit(1);
    }

    // Read one line (or up to 289 characters) from the file
    if (fgets(str, sizeof(str), fp) != NULL)
    {
        printf("%s", str);
    }
    else
    {
        printf("Error: Failed to read from file.\n");
    }

    // Close the file
    fclose(fp);

    return 0;
}
