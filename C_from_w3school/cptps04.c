//PROBLEM-04
/*Write a program that will input two
foating-point numbers and then display the
product on the screen.*/

#include<stdio.h>
int main()
{
    float n1, n2, prod;
    printf("Enter to float number \n");
    scanf("%f %f", &n1, &n2);
    prod = n1 * n2;
    printf("%f xn %f = %f \n", n1, n2, prod);
    return 0;
}
