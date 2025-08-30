#include <stdio.h>

int main() {
    int a, b, c, ab, bc, ac;

    printf("Enter three numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    // Calculate the products after reading the values
    ab = a * b;
    bc = b * c;
    ac = a * c;

    printf("Your given three numbers: %d %d %d\n", a, b, c);

    if (ab % 2 == 0) {
        printf("scope 1: |%d = %d * %d| Number is divisible by 2, %d / 2 = %d\n", ab, a, b, ab, ab / 2);
    } else if (ab % 3 == 0) {
        printf("scope 1: |%d = %d * %d| Number is divisible by 3, %d / 3 = %d\n", ab, a, b, ab, ab / 3);
    } else if (ab % 5 == 0) {
        printf("scope 1: |%d = %d * %d| Number is divisible by 5, %d / 5 = %d\n", ab, a, b, ab, ab / 5);
    } else {
        printf("scope 1: |%d = %d * %d| Number is not divisible by 2, 3, or 5; number is : %d\n", ab, a, b, ab);
    }

    if (bc % 2 == 0) {
        printf("scope 2: |%d = %d * %d| Number is divisible by 2, %d / 2 = %d\n", bc, b, c, bc, bc / 2);
    } else if (bc % 3 == 0) {
        printf("scope 2: |%d = %d * %d| Number is divisible by 3, %d / 3 = %d\n", bc, b, c, bc, bc / 3);
    } else if (bc % 5 == 0) {
        printf("scope 2: |%d = %d * %d| Number is divisible by 5, %d / 5 = %d\n", bc, b, c, bc, bc / 5);
    } else {
        printf("scope 2: |%d = %d * %d| Number is not divisible by 2, 3, or 5; number is : %d\n", bc, b, c, bc);
    }

    if (ac % 2 == 0) {
        printf("scope 3: |%d = %d * %d| Number is divisible by 2, %d / 2 = %d\n", ac, a, c, ac, ac / 2);
    } else if (ac % 3 == 0) {
        printf("scope 3: |%d = %d * %d| Number is divisible by 3, %d / 3 = %d\n", ac, a, c, ac, ac / 3);
    } else if (ac % 5 == 0) {
        printf("scope 3: |%d = %d * %d| Number is divisible by 5, %d / 5 = %d\n", ac, a, c, ac, ac / 5);
    } else {
        printf("scope 3: |%d = %d * %d| Number is not divisible by 2, 3, or 5; number is : %d\n", ac, a, c, ac);
    }

    return 0;
}
