#include<stdio.h>


//define structure
struct Car{
    char brand[33];
    int year;

};

// define a func
void updateYear(struct Car *c){
    c->year = 3003;
}


int main()
{
    struct Car myCar = {"MXA", 2143};
    updateYear(&myCar);

    printf("brand: %s\n", myCar.brand);
    printf("year: %d\n", myCar.year);
    //
    return 0;
}
