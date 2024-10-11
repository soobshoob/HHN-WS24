#include <stdio.h>

int main()
{
    int a, b;
    char act; 
    printf("Please enter the first number: ");
    scanf("%d", &a);
    printf("Please enter the second number: ");
    scanf("%d", &b);
    printf("Nubmers (a) add, (s), subtract, (d) devide or (m) multiply?\nTo stop choice (c): ");
    scanf(" %c", &act);//spase before %c for making "scanf" ignore spaces in nest line
    switch (act){
        case 'a':
            printf("Result: %d\n", a+b);
            break;
        case 's':
            printf("Result: %d\n", a-b);
            break;
        case 'd':
            printf("Result: %d\n", a/b);
            break;
        case 'm':
            printf("Result: %d\n", a*b);
            break;
        case 'c':
            printf("See you!\n");
            break;
        default:
            printf("Failture: This is not possible!\n");
            break;
    }
    return 0;
}