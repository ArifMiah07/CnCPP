#include<stdio.h>

//structure

struct myStructure{
    char name[100];
    int age;
    float salary;
};


int main()
{

    struct myStructure ms1 = {"ali", 33, 23500.34};

    printf("%s, %d, %f", ms1.name, ms1.age, ms1.salary);


    return 0;
}
