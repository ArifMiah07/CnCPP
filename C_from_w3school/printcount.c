#include<stdio.h>

int main()
{
    int number = 12;
    int result = number + (number * number);
    for(int i = 1; i <= 10; i++){
            printf("\n\t\t\t\t");
           for(int j = 1; j <= i - 1; j++){
               printf("\t#*''*#");
               for(int k = 1; k <= j +1; k++){
                printf("\t#*''*#");
                 printf("\t#*'\t\t'*#\t#*'\t\t'*#");
               }
           }

    }
    printf("\n\n\n\n\n");
    return 0;
}
