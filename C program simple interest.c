//Calculation of simple interest
#include<stdio.h>
int main (){
    double principal_interest;
    int time;
    float rate;
    double simple_interest;
    
    printf("Enter the principal_interest:");
    scanf("%lf",&principal_interest);
    
    printf("Enter the time in years:");
    scanf("%d",&time);
    
    printf("Enter the rate:");
    scanf("%f",&rate);
    
    simple_interest=(principal_interest*time*rate)/100;
    printf("the simple_interest is %.2lf",simple_interest);
    
    return 0;
}