//The area of a cylider
#include<stdio.h>
int main(){
    double pi;
    float radius;
    int height;
    double area;
    
    printf("\nEnter the pi:");
    scanf("%lf",&pi);
    
    printf("\nEnter the radius:");
    scanf("%f",&radius);
    
    printf("\nEnter the height:");
    scanf("%d",&height);
    
    area=2*pi*radius*height+2*pi*radius*radius;
    printf("the area is %lf\n",area);
    
    return 0;
    
}