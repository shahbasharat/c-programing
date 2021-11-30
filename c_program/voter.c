#include<stdio.h>                                                                
                                                                                
void main()                                                                     
{  
     
char name[30];                                                                 
int age, nor;                                                            
printf("Enter name: ");                                                        
 scanf("%s", name);                                                             
 printf("\nEnter your age: ");                                                  
 scanf("%d", &age);                                                             
 if(age>=18)                                                                    
 {                                                                              
   printf("\n%s: you are eligible to vote!", name);                             
 }                                                                              
 else                                                                           
 {                                                                              
   nor = 18-age;                                                          
   printf("%s: you are not eligible to vote and need to wait for %d years!", name, nor);
 }  
                                                                           
}                                                                 
