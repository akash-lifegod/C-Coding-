/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void main()
{
    int a=10, b=20, c;
    printf("before swapping a=%d ,b=%d \n",a,b);
    c=b;
    b=a;
    a=c;
    printf("after swapping a=%d , b=%d",a,b);
}