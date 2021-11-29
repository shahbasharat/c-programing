#include<stdio.h>


int main()
{
    int a = 5;
    printf("value of a = %d\n",a);

    int *p;


    a = 10;
    printf("value of a = %d\n",a);

    p = &a;

    *p = 15;
    printf("value of a = %d\n",a);






}