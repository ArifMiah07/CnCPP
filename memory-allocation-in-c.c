/* The process of reserving memory is called allocation. The way to allocate memory depends on the type of memory.

C has two types of memory: Static memory and dynamic memory.
Static Memory

Static memory is memory that is reserved for variables before the program runs. Allocation of static memory
 is also known as compile time memory allocation.

C automatically allocates memory for every variable when the program is compiled.

For example, if you create an integer array of 20 students (e.g. for a summer semester), C will reserve
space for 20 elements which is typically 80 bytes of memory (20 * 4): *///

//

#include<stdio.h>
#include<stdlib.h>
//

int main()
{
//    int *ptr1, *ptr2;
//    ptr1 = malloc(sizeof(*ptr1));
//    ptr2 = calloc(1, sizeof(*ptr2));
    int *students;
    int num_of_students = 12;

    students = calloc(num_of_students, sizeof(*students));
    printf("size: %d \n", num_of_students * sizeof(*students)); //48

    return 0;
}

