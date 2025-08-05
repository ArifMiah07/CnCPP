#include<stdio.h>
int main()
{

    FILE *fptr;
    //create a file;
    fptr = fopen("fileSystem.c", "w");
    fclose(fptr);

    return 0;
}
