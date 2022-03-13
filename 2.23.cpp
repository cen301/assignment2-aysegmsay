#include <stdio.h>

int main( void ) 
{   
    int number1;
    int number2;
    int number3;
    int min;
    int max;
    
    printf("enter first number:");
    scanf("%d",& number1);
    
    printf("enter second number:");
    scanf("%d",& number2);
    
    printf("enter third number:");
    scanf("%d",& number3);
    
    min=number1;
    if(number2 < min){
		printf("min= %d",number2);
   }
	if(number3 < min){
		printf("min= %d",number3);
   }
    max=number1;
	 if(number2 > max){
		printf("max= %d",number2);
   }
	if(number3 > max){
		printf("largest= %d",number3);
    
    }
	
}
