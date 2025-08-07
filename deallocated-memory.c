/*
    Deallocate (free) Memory

When you no longer need a block of memory you should deallocate it. Deallocation is also referred to as "freeing" the memory.

Dynamic memory stays reserved until it is deallocated or until the program ends.

Once the memory is deallocated it can be used by other programs or it may even be allocated to another part of your program.
Free Memory

To deallocate memory, use the free() function:
free(pointer);

The pointer parameter is a pointer to the address of the memory to be deallocated:
int *ptr;
ptr = malloc(sizeof(*ptr));

free(ptr);
ptr = NULL;

It is considered a good practice to set a pointer to NULL after freeing memory so that you cannot accidentally continue using it.

If you continue using memory after it has been freed you may corrupt data from other programs or even another part of your own program.

 */

#include<stdio.h>
#include<stdlib.h>


int main()
{
    //
    int *ptr;
    ptr = malloc(sizeof(*ptr)); //allocate memory for one integer
    // if memory can not be allocated, print a message ans end the main() function;
    if(ptr == NULL)
    {
        printf("Unable to allocate memory!");
        return 1;
    }
    // else, set the value of the integer
    *ptr = 20;
    // print the integer value
    printf("integer value: %d \n", *ptr);

    // free allocated memory
    free(ptr);

    // Set the pointer to NULL to prevent it to being accidentlly used
    ptr = NULL;

    return 0;
}
