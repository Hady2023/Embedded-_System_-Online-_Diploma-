#include<stdio.h>
#include"header.h"
#include"confige.h" 

int main()

{
 
int i ; 
char x []= "hadyayman"; 

//any diffrant betwwen any two capital and small is 32 
char def =32; 

char final_result [100];
 
 for(i  =0 ; i<=sizeof(x)-1 ; i++)

 {
 
 //using precompiler directive and control the statment true or false by config file  
 
 #if( Capital )
 
  {
    
  final_result[i]=x[i]+def;
      
 
  }
  
  #endif
  

 
  #if(Small)
 
  {
    
  final_result[i]=x[i]-def; 
  
  }
  
  #endif 
   
  
}
  final_result[i]=0;
  
puts(final_result); 
    
  return 0;
 }