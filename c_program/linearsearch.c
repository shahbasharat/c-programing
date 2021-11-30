#include<stdio.h>
void main()
{
    int num;
  int i, keynum, found=0;
   printf("Enter the number of elements \n  ");
   scanf("%d",&num);
   int array[num]; 
   printf("Enter the elements one by one \n");
   for (i=0; i<num; i++)
{
scanf("%d",&array[i]);

}
 printf("Enter the element to be searched \n  ");
 scanf("%d",&keynum);
 for (i=0; i<num ; i++)
 {
 if (keynum == array[i])
  {
      found = 1;
  break;
  }
 }
 if (found==1)
 printf("element is present in the array at  postion %d \n ",i+1);
 else 
 printf("element is not present in the array\n");
}