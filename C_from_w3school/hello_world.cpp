#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    int a;
    printf("write a year: \n");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("hello world, this is %d.\nand this year is so good\n", a);
    } else {
        printf("hello world, this is %d.\nthis year is so odd\n", a);
        printf("But we need to make this world more good, let's do this. %d\nnow this is a good year, I think\n", a + 1);
        for (int b = 3; b <= a; b = b + 3) {  // increment b by 3 each iteration
            if (a % 3 == 0) {
                printf("this is %d\n", a - b);  // decrees 3 if a is divided by 3
            }

            printf("hello hello hello \n");
        }
    }

    return 0;
}
