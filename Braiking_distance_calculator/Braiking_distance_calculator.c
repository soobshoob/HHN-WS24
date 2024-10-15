#include <stdio.h>

int main()
{
    float s, a, t, d,s1;
    printf("Type the automotive velocity in km/h: ");
    scanf("%f", &s);
    s1=s/3.6;
    printf("Type the the braking ecceleration in m/s^2: ");
    scanf("%f", &a);
    t=s1/a; 
    d=s1*t-(a*t*t/2);
    printf("The time to stop is %5.2f s and the braiking distance is %5.2f m", t, d);
    return 0;
}