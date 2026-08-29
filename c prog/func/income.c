#include <stdio.h>

int main(){
    
    int income ;
    printf("Enter your income: ");
    scanf("%d", &income);
    int tax;

    printf("Enter your income: ");
    scanf("%d", &income);
    if (income<=250000)
    {
        printf("No tax");
    }
    else if (income>250000 && income<=500000)
    {
        printf("5 percent tax");
        tax = 0.05*(income-250000);
    }
    else if (income>500000 && income<=1000000)
    {
        printf("20 percent tax");
        tax = 0.05*(500000-250000) + 0.2*(income-500000);
    }
    else
    {
        printf("30 percent tax");
        tax =  0.05* (500000-250000) + 0.2* (1000000-500000) + 0.3* (income-1000000);

    }
    printf("Your total tax is %d", tax);
    return 0;
}