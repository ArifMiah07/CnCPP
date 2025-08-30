/*

Memory Leaks

A memory leak happens when dynamic memory is allocated but never freed.

If a memory leak happens in a loop or in a function that is called frequently it could take up too much memory and cause the computer to slow down.

There is a risk of a memory leak if a pointer to dynamic memory is lost before the memory can be freed. This can happen accidentally, so it is important to be careful and keep track of pointers to dynamic memory.

Here are some examples of how a pointer to dynamic memory may be lost.
Example 1

The pointer is overwritten:
int x = 5;
int *ptr;
ptr = calloc(2, sizeof(*ptr));
ptr = &x;

In this example, after the pointer is changed to point at x, the memory allocated by calloc() can no longer be accessed.
Example 2

The pointer exists only inside a function:
void myFunction() {
  int *ptr;
  ptr = malloc(sizeof(*ptr));
}

int main() {
  myFunction();
  printf("The function has ended");
  return 0;
}

In this example, the memory that was allocated inside of the function remains allocated after the function ends but it cannot be accessed anymore. One way to prevent this problem is to free the memory before the function ends.
 Example 3

The pointer gets lost when reallocation fails:
int* ptr;
ptr = malloc(sizeof(*ptr));
ptr = realloc(ptr, 2*sizeof(*ptr));

If realloc() is unable to reallocate memory it will return a pointer to NULL and the original memory will remain reserved.

In this example, if realloc() fails then the NULL pointer is assigned to the ptr variable, overwriting the original memory address so that it cannot be accessed anymore.
Summary

In summary, when managing memory in C, use best practices:

    Remember to check for errors (NULL return values) to find out if memory allocation was sucessful or not
    Prevent memory leaks - always remember to free memory that is no longer used, or else the program might underperform or even worse, crash if it runs out of memory
    Set the pointer to NULL after freeing memory so that you cannot accidentally continue using it

Tip: You will learn more about NULL in our NULL chapter.


*/


#include<stdio.h>
#include<stdlib.h>

int main(){

    //
    return 0;
}











