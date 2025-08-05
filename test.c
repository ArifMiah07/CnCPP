#include<stdio.h>
int main()
{
    int a, b, c;
    printf("enter a number\n");
    scanf("%d", &a);
    if(a <= 0){
        printf("Are a so negative boy!\n");
    }else{
    printf("U are so positive  = %c \n", a);
    }
    printf("enter a number again\n");
    scanf("%d", &b);
    if(b >= 0){
        printf("U r a + boy\n");
    }else{
        printf("U r so - boy\n");
    }
    printf("enter a number again\n");
    scanf("%d", &c);
    if(c >= 0 && c % 2 == 0){
        printf("You are so bad boy\n");
    }else{
        printf("You are so bad boy\n");
    }
    printf("sizeof: %d byte\n %d byte\n %d byte\n", sizeof(a), sizeof(b), sizeof(c));

    return 0;
}
