#include<stdio.h>

int count = 0;
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
    printf("\n");
}


void heapify(int a[], int n, int i )
{
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i +2;
    int temp;

    count++;
    if( left < n && a[left] > a[largest])
        largest = left;

    count++;
    if( right < n && a[right] > a[largest])
        largest = right;

    if(largest != i)
    {
        temp = a[largest];
        a[largest] = a[i];
        a[i] = temp;

        heapify(a,n,largest);
     }


}

void heapsort(int a[], int n)
{
    int i,temp;


    //build max heap
    for( i = (n/2)-1 ; i>=0 ; i-- )
        heapify(a,n,i);

    for( i = n-1 ; i>=0 ; i--)
    {
        temp = a[0];
        a[0] = a[i];
        a[i] = temp;

        heapify(a,i,0);

        ///displayarray(a,n);
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
    heapsort(a,n);
    //sort  
    

    printf("\n\nAfter sorting\n");
    displayarray(a,n);

    printf("\n##the comparison count is %d ",count);

}