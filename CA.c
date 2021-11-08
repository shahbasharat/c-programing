#include <stdio.h>
int main(int argc, char *argv[])
{
	int a=200,b=30,c=6,big;
	
	/*big=a;
	if(b>big)
	  big=b;
    if(c>big)
      big=c;
	   printf("\n big =  %d ", big);*/
	   
   if(a>b)
    {
     if(a>c)
	  printf("big =%d",a);
	 else 
	  printf("big= %d",c);	
     }
     else
     {
      if(b>c)
	    printf("big= %d",b);
	else
	    printf("big=%d",c);	
     	
     	
     }
	return 0;
}
