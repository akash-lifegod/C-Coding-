#include <stdio.h>

void main()
{
    float a,b,c,d,e,f;
    printf("Enter your English marks\n");
    scanf("%f",&a);
    printf("Enter your Physics marks\n");
    scanf("%f",&b);
    printf("Enter your Maths marks\n");
    scanf("%f",&c);
    printf("Enter your Chemistry marks\n");
    scanf("%f",&d);
    printf("Enter your Computer Science marks\n");
    scanf("%f",&e);
    f=a+b+c+d+e;
    printf("%f Marks obtained out of 500\n",f);
    printf("Average marks=%f",f/5);
    printf("\nYou got %f percent Marks",f/5);
}
