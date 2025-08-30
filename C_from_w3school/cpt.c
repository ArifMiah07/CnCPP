//PROBLEM-03
/*Write a program that enters two integer values and
 displays the summation on the screen.*/

 //write a program-/
 #include<stdio.h>
 int main()
 {
     //enters two integer
     int num1, num2;
     printf("Plz enter two integer value: \n");
     scanf("%d %d", &num1, &num2);
     //displays the summation on the screen
     printf("sum of the two number is %d + %d = %d", num1, num2, num1 + num2);
     return 0;
 }
