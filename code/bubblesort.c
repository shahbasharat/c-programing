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
    printf("***** The values in the array are as ***** \n");
    for( i = 0; i < n; i++)
    {
        printf("%d " ,a[i]);
    }
}

void bubblesort(int a[] , int n)
{
    int i,j,temp;
    int swapped;

    for(i = 0 ; i < n-1 ; i++)
    {
        swapped = 0;

        for( j = 0 ; j < n-1-i ; j++)
        {
            //count ++
            if( a[j] > a[j+1] )
            {
                swapped = 1;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }

        if( swapped == 0)
        {
            break;
        }

    }

}




int main()
{
    // declare variable 
    int a[1000] , n ;

    printf("enter how many value u require \n");
    scanf("%d",&n);

       
    getarray(a,n);  

    printf("\n\nBefore sorting\n");
    displayarray(a,n);

    //sort
    bubblesort(a,n);
    //sort  
    

    printf("\n\nAfter sorting\n");
    displayarray(a,n);



}