#include <stdio.h> 

int n_check(int n){ //Check for Errors
    int chk;
    if(n<1){
        printf("Error: %d is not a natural number\n", n);
        chk=1;
    }
    else{
        chk=0;
    }
    return chk;
}

char hex_lt_dec(int n, int t){ //If n%16 is more than 9
    char lt;
    switch (t){
    case 10: lt = 'A'; break;
    case 11: lt = 'B'; break;
    case 12: lt = 'C'; break;
    case 13: lt = 'D'; break;
    case 14: lt = 'E'; break;
    case 15: lt = 'F'; break;
    default: lt= '0'; break;
    }
    return lt;
}

void hex_count(int n){ //Here we are converting ()^10 to ()^16
    int t, i=0;
    char hex[100];
    while (n>0){ //All results we are adding to same string one by one
        t=n%16;
        if(n%16>=10){
            hex[i]=hex_lt_dec(n, t);
        }
        else{
            hex[i]=t+'0';
        }
        n=n/16;
        i++;
    }
    printf("Hexadecimal: "); //here we are printing string from behind
    for (int j=i-1; j>=0; j--){
        printf("%c", hex[j]);
    }
    printf("\n");
}

int main(void)
{
    int n, chk=1; //start the program
    while (chk){
        printf("Enter a natural number: ");
        scanf("%d", &n);
        chk=n_check(n);
    }
    hex_count(n);
    return 0;
}