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

void insertionsort(int a[] , int n)
{
    int i,j,temp;

    for( i = 1 ; i < n ; i++)
    {   // takes the elements one by one for comparision
        temp = a[i];

        for( j = i-1 ; j >=0 ; j--)
        {   // compares the element with the sorted portion of the array
            if(a[j] > temp)
            {   //shift the element
                a[j+1] = a[j] ;
            }
            else
            {
                break;
            }
        }
        a[j+1] = temp;

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
    insertionsort(a,n);
    //sort  
    

    printf("\n\nAfter sorting\n");
    displayarray(a,n);



}