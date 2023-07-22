#include<stdio.h>
#include"header.h"
void main()
{
int num_1 , num_2 ; 
printf("Enter two number \n"); 
scanf("%d",&num_1); 
scanf("%d",&num_2); 
swap_num(&num_1 ,&num_2);
}