#include<stdio.h>
#include<math.h>

//prototype
int func_print();
int func_prime_finder(int num);


//main function

int main()
{
    //valiables
    int number, num2;

    printf("Enter a number: \n");
    scanf("%d", &number);
    if(number >= 0){
        printf("Enter a positive number again: \n");
        scanf("%d", &num2);
        if(num2 % 2 == 0){
            printf("Hey positive even boy, whats up!!?\n");
        }else{
            printf("Hey positive odd boy, whats up man!!?\n");
        }
    }else{
        if(num2 % 2 == 0){
            printf("Hey negative even boy, whats up!!?\n");
        }else{
            printf("Hey negative odd boy, whats up man!!?\n");
        }
    }

    int func_result1 =  func_prime_finder(number);
    printf("%d\n", func_result1);
    int result = func_print();

    return 0;

}


//functions
int func_prime_finder(int num){
//checking is number <=1 //because prime start from 2
    if (num <= 1) {
        return 0;
    }
    //check is func is a prime
    int is_prime = 1;
    for(int i = 2; i <= sqrt(num); i ++)
    {
        if(num % i == 0 )
        {
            is_prime = 0;
            printf("%d is not prime\n %d %% %d = %d\n",num, num,i, num % i);
            printf("%d / %d = %d\n",num,i, (num / i));
            break;
        }
    }
    //print if func is prime
    if(is_prime)
    {
        printf("%d is prime\n",num);
    }


    return is_prime;
}

int func_print(){
    printf("hello world\n");
    printf("how are y my boy?\n");
}
