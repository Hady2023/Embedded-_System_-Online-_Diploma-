#include <stdio.h>
#include <string.h>

//strcat function 

int main()

{
    
char x [] = "hady"; 
  
char y []= "ayman"; 
    
    
//loop in the first string 
 
 for(int i =0 ; i<=sizeof(x)-1 ; i++ )
   
 {
      
  /*if statment to define the null operator and over write on it by space
       
 then incremnte the address by one to start concatinate a new string 
  /*/
 
  if(x[i] == '\0')
   
  {
         
 x[i]= ' '; 
        
  i++; 

          
    for(int j =0 ; j<=sizeof(y)-1 ; j++)
            
    {
               
      x[i+j]=y[j]; 
           
    }
 
  }
        
  
}

 puts(x); 
  
 return 0;

}
