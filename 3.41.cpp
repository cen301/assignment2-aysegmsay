#include <stdio.h>

int main( ) 
{   
    float radius ;
    float pi= 3.14159;
    float area;
    float diameter;
    float circumference;
    
      
    printf("enter radius");
    scanf("%f",&radius);
    
    area= pi*radius*radius;
    diameter=radius*2;
    circumference=2*pi*radius;
    
    printf("area is %f\n",area);
    printf("diameter is %f\n",diameter);
    printf("circumference is %f\n",circumference);
}
