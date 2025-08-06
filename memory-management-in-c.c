#include<stdio.h>


int main()
{
    int number;
    float divide_a_num;
    double pie2pie;
    char only_a_letter;
    char some_word[100];

    printf("%d %f %lf %c %s \n", number, divide_a_num, pie2pie, only_a_letter, some_word);
    printf("%d %d %d %d %d \n", sizeof(number), sizeof(divide_a_num), sizeof(pie2pie), sizeof(only_a_letter), sizeof(some_word));
    printf("%zu %zu %zu %zu %zu \n", sizeof(number), sizeof(divide_a_num), sizeof(pie2pie), sizeof(only_a_letter), sizeof(some_word));

    return 0;
}
