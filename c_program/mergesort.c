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

void mergesort(int a[], int l, int r)
{
    int mid ;
    if ( l < r)
    {
        mid = (l+r) /2 ;
        //printf("\n** %d %d %d ",l,mid,r);
        mergesort(a, l, mid);
        mergesort(a, mid+1 , r);

        merge(a,l,mid,r);
    }

}

void merge( int a[] ,int l, int mid , int r)
{
    int i,j,k;

    int lsize = (mid-l) + 1 ;
    int rsize = r - mid;

    int larr[lsize];
    int rarr[rsize];
    //copying the arrays
    for( i = 0 ;  i < lsize ; i++)
    {
        larr[i] = a[l+i];
    }

    for( j = 0 ; j < rsize ; j++)
    {
        rarr[j] = a[mid + 1 + j];
    }

    i=0;
    j=0;
    k=l;
    //merging
    while( i < lsize && j < rsize)
    {
        if(larr[i] < rarr[j])
        {
            a[k] = larr[i];
            i++;
            k++;

        }
        else
        {
            a[k] = rarr[j];
            j++;
            k++;

        }
    }
    //remaing portion
    while( i < lsize)
    {
        a[k] = larr[i];
        i++;
        k++;

    }

    while( j < rsize)
    {
        a[k] = rarr[j];
        j++;
        k++;
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

    //merge sort
    mergesort(a, 0, n-1);
    //sort  
    

    printf("\n\nAfter sorting\n");
    displayarray(a,n);



}