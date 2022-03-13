#include <stdio.h>

int main( ) 
{   
    int a;
    int b;
    int c;
    
    printf("enter a= ");
    scanf("%d",&a);
    
    printf("enter b= ");
    scanf("%d",&b);
    
    printf("enter c= ");
    scanf("%d",&c);
    
    if( (a*a+b*b==c*c) || (a*a+c*c==b*b) || (b*b+c*c==a*a)) {
    	printf("they are the sides of a right triangle");
    }
    else {
    	printf("they are not the sides of a right triangle");
	}
}
