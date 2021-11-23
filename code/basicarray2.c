#include<stdio.h>

void getarray(int a[] , int n)
{
    int i;
    printf("enter %d values \n",n);
    for( i = 0; i < n; i++)
    {
        scanf("%d", &a[i] );
    }
}

void displayarray(int a[] , int n)
{
    int i;
    printf("\n***** The values in the array are as ***** \n");
    for( i = 0; i < n; i++)
    {
        printf("%d " ,a[i]);
    }
}


int main()
{
    // declare variable 
    int a[1000] , n ;
    int i;

    printf("enter how many value u require \n");
    scanf("%d",&n);
       
    getarray(a,n);  


    //sort  
    displayarray(a,n);


}