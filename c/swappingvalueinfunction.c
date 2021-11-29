#include<stdio.h>

void swap( int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swapbypointer(int *x ,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    
}

int main()
{
    int a,b;
    
    a = 10;
    b = 20;

    printf("a = %d , b = %d \n",a,b);

    swap(a,b);

    printf("a = %d , b = %d \n",a,b);

    swapbypointer( &a, &b );

    printf("a = %d , b = %d \n",a,b);
}
