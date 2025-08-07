#include<stdio.h>
#include<stdlib.h>

int main()
{
    /* Reallocate Memory
    If the amount of memory you reserved is not enough, you can reallocate it to make it larger.
    Reallocating reserves a different (usually larger) amount of memory while keeping the data that was stored in it.
    You can change the size of allocated memory with the realloc() function.
    The realloc() function takes two parameters:
    int *ptr2 = realloc(ptr1, size);
    The first parameter is a pointer to the memory that is being resized.
    The second parameter specifies the new size of allocated memory, measured in bytes.
    The realloc() function tries to resize the memory at ptr1 and return the same memory address. If it cannot resize
    the memory at the current address then it will allocate memory at a different address and return the new address instead.
    Note: When realloc() returns a different memory address, the memory at the original address is no longer reserved and it
    is not safe to use. When the reallocation is done it is good to assign the new pointer to the previous variable so
    that the old pointer cannot be used accidentally.
  */
    int *ptr1, *ptr2, size;
    //allocate memory for four integers
    size = 4 * sizeof(*ptr1);
    ptr1 = malloc(size);
    printf("%d bytes allocated at address %p \n", size, ptr1);

    //resize the memory to hold 6 integer;
    size = 6 * sizeof(*ptr1);
    ptr2 = realloc(ptr1, size);
    printf("%d bytes reallocated at address %p \n", size, ptr2);

    return 0;
}
