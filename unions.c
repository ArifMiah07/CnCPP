#include<stdio.h>

// just like struct
// declare an unions
union myUnion{
int myNum;
char myLetter;
char myStringp[40];
double myDouble;

};


int main()
{
    //
    union myUnion u1;
    u1.myNum = 999;
    //import--> only the last assign value is hold a valid value as union share the same memory (diff from struct)
    u1.myLetter = 'A';
    u1.myDouble = 3.1416;

    printf("My number = %d \n", u1.myNum);
    printf("My Letter = %c \n", u1.myLetter);
    printf("My double = %lf \n", u1.myDouble);

    /* size of the union --> The size of a union will always be the same as the size of its largest member: */
    printf("size of the union: %zu \n", sizeof(u1));

    return 0;
}
