#include <stdio.h>
int main(int argc, char *argv[])
{

   float price;
   float discount_percentage;
   float discount_amount;
   float discounted_price;
  


    printf(" \t\t\t\t\tCalculate Discount Amount \t  ");

    printf("\n\n Enter Price of Item  : ");
    scanf("%f", &price);
    
   
    printf("\n\n Enter Discount Percentage on Item  : ");
    scanf("%f", &discount_percentage);
    
    
    discount_amount = (discount_percentage*price)/100;
    
    discounted_price = (price-discount_amount);
  
    
    printf("\n\nDiscount amount : %f \n\n",  discount_amount);
    printf("Discounted price : %f \n\n",  discounted_price);
  
    
  





	return 0;
}