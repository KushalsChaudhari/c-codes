#include<stdio.h>

int main( )
{
    double ammount,discount; 

    // Input: 
    printf("Enter the ammount "); 
    scanf("%lf",&ammount);// 5000  
    int amt = ammount;
    //processing 
    if(ammount >=5000)// if(1)
        ammount = ammount * 0.90;
        discount =  ammount - amt;

   
    printf("Total ammount = %.2lf discount of %.2lf",ammount,discount); 
    return 0; 
}