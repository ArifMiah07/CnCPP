#include<stdio.h>
#include<math.h>

//prototypes:
int func_formula1(int n);
int func_formula2(int n);
int func_prime_finder(int func);

//main function
int main()
{
    int n;

    printf("Enter a number: \n");
    scanf("%d", &n);

    int formula_result1 = func_formula1(n);
    //printf("%d\n", formula_result1);

    int formula_result2 = func_formula2(n);
    //printf("%d\n", formula_result2);

    int isPrime1 = func_prime_finder(formula_result1);
    int isPrime2 = func_prime_finder(formula_result2);


    return 0;
}

//find one prime number function
int func_prime_finder(int func)
{
    //checking is number <=1 //because prime start from 2
    if (func <= 1) {
        return 0;
    }
    //check is func is a prime
    int is_prime = 1;
    for(int i = 2; i <= sqrt(func); i ++)
    {
        if(func % i == 0 )
        {
            is_prime = 0;
            printf("%d is not prime\n %d %% %d = %d\n",func, func,i, func % i);
            printf("%d / %d = %d\n",func,i, (func / i));
            break;
        }
    }
    //print if func is prime
    if(is_prime)
    {
        printf("%d is prime\n",func);
    }


    return is_prime;
}

//formula for - 1
int func_formula1(int n)
{
    int formula1 = (n + (n * n)) - 1;
    //printf("%d\n", formula1);
    return formula1;
}

//formula for + 1
int func_formula2(int n)
{
    int formula2 = (n + (n * n)) + 1;
    //printf("%d\n", formula2);
    return formula2;
}


