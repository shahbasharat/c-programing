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
}

int partition(int a[], int l, int r)
{
    int i , j , temp , pivot;
    
    if( l <  r)
    {
        pivot = a[r];
        i = 0;
        j = r;

        while( i < j)
        {

            while(a[i] <= pivot && i<r)
            {                
                i++;
                count++;
            }
            count++;


            while( j>=l && a[j] >= pivot)
            {
                j--;
                count++;
            }
            count++;

            if(i<j)
            {
                temp = a[i];
                a[i] =a[j];
                a[j] = temp;
            }
        }
        
        temp = a[i];
        a[i] = a[r];
        a[r] =temp;
        
        return i;
    }   

}
 


void quicksort(int a[],int l, int r)
{
    int pi;
    if(l<r)
    {
        pi = partition(a,l,r);
       
        quicksort(a,l,pi-1);
        quicksort(a,pi+1,r);        

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
    quicksort(a,0,n-1);
    //sort  
    

    printf("\n\nAfter sorting\n");
    displayarray(a,n);

   
    printf("\n## the comoparision count is %d ",count);


}