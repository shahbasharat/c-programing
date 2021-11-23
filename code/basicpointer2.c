#include<stdio.h>


int main()
{
    int a;
    int *p;

    p = &a;
    *p = 35;

    printf("value of a = %d\n",a);
    printf("addre of a = %d\n",&a);

    printf("value in p = %d\n",p);
    printf("addre of p = %d\n",&p);
    printf("value of a = %d\n",*p);

    
    
}