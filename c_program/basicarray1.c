#include<stdio.h>

int main()
{
    // declare variable 
    int a[1000] , n ;
    int i;

    printf("enter how many value u require \n");
    scanf("%d",&n);


    printf("enter %d values \n",n);
    for( i = 0; i < n; i++)
    {
        scanf("%d", &a[i] );
    }    
    

    /// sort 



    printf("\n***** The values in the array are as ***** \n");
    for( i = 0; i < n; i++)
    {
        printf("%d " ,a[i]);
    }


}