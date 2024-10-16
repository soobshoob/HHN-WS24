#include <stdio.h>

int check_num(int n){
    int check;
    if (n<=0){
        check=0;
        printf("Error: number %d is not natural.\n", n);
    }
    else{
        check=1;
    }
    return check;
}

int fakultaet(int n){
    int n_f=1;
    for (int i=1; i<=n; i++){
        n_f=n_f*i;
    }
    return n_f;
}

int main()
{
    int n, check=0;
    while (check==0){
        printf("Enter a natural number: ");
        scanf("%d", &n);
        check=check_num(n);
    }
    printf("%d! = %d", n, fakultaet(n));
    return 0;
}