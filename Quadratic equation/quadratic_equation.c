#include<stdio.h>
#include<math.h> //added for sqrt function

//function for separating the lines
void separate ()
{
    printf("\n");
    for (int i = 0; i < 60; i++)
    {
        printf("=");
    }
    printf("\n\n");
}

//function for solving the quadratic equation
void solve (float a, float b, float c, float d)
{
    //discriminant calculation
    d = b*b - 4*a*c;
    //discriminant check
    if(d>0) 
    {
        float x1 = (-b + sqrt(d))/(2*a);
        float x2 = (-b - sqrt(d))/(2*a);
        printf("Roots are real and distinct:\n");
        printf("x1 = %.2f\n",x1);
        printf("x2 = %.2f\n",x2);
    }
    else if(d==0)
    {
        float x = -b/(2*a);
        printf("Roots are real and equal:\n");
        printf("x = %.2f\n",x);
    }
    //needed to use imaginary roots
    else
    {
        printf("Roots are imaginary:\n");
        float x = -b/(2*a);
        float y = sqrt(-d)/(2*a);
        printf("x1 = %.2f + %.2fi\n",x,y);
        printf("x2 = %.2f - %.2fi\n",x,y);
    }

}

int main()
{
    float a,b,c,d;
    //asking for input values
    printf("Enter the values of a,b,c: \n");
    scanf("%f %f %f",&a,&b,&c);
    separate();
    solve(a,b,c,d);
    separate();
    printf("\nMade by soobshoob(^_^)\n\n");
    return 0;
}