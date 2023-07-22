#include <stdio.h>
void swap_num (int*p_1 , int*p_2)
{
  *p_1 = *p_1 + *p_2;  
  *p_2 = *p_1 - *p_2; 
  *p_1 = *p_1 - *p_2;

 printf("%d\n" ,*p_1 ); 
 printf("%d\n", *p_2 ); 
   
}