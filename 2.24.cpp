#include <stdio.h>

int main( void ) 

{   
    int number ;
     
    printf("enter number:");
    scanf("%d",&number);
    
    if(number%2==0){
   	    printf("%d is a even number",number);
	}
    if(number%2!=0){
    	printf("%d is a odd number",number);
	}
}
