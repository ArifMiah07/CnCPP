#include<stdio.h>


// function that reverse an interger
int reverse(int n)
{
    int rev = 0; //store reverse number here
     while(n > 0)
     {
         int digit = (n % 10); //get the digit
         rev = rev * 10 + digit; // append the digit into reverse number
         n = n / 10;
     }
    return rev;

}


int main()
{
    int number = 23456;
    int reversed = reverse(number);
    printf("original number = %d \n", number);
    printf("reversed number = %d \n", reversed);

    return 0;
}






// #include<stdio.h>

// int rev_num(int n){
//     int rev = 0; //store reverse number

//     while( n > 0)
//     {
//         int digit = (n % 10); //get last digit
//         rev = rev * 10 + digit; //append digit to the rev number
//         n = n / 10;
//     }
//     return rev;
// }

// int main()
// {
//     //
//     int number = 12345;
//     int reversed = rev_num(number);
//     printf("original number = %d \n", number);
//     printf("reversed number = %d \n", reversed);
//     return 0;
// }

