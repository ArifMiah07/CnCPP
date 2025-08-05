/* n! = n × (n-1) × (n-2) × ... × 1 */
// factorial

#include<stdio.h>


int f_fac(int n);


int main()
{
    //
    int result = f_fac(5);
    printf("factorial = %d \n", result);
    return 0;
}


int f_fac(int n)
{
    if(n == 0 || n==1){
        return 1;
    }else{
        return n * f_fac(n-1);

    }
}
