#include <stdio.h>
// function to calculate the income tax
float calculate_income_tax(float income, float tax)
{
    if (income <= 500000)
    {
        // printing the tax
        printf("\n NO TAX");
    }
    else if (500000 < income < 1000000)
    {
        // calculating the income tax
        tax =  income*10/100 ;
        // printing the tax
        printf("tax is:%f", tax);
    }
    else if (100000< income < 2000000)
    {
        // calculating the income tax
        tax = income * 0.18; 
        // printing the tax
        printf("tax is:%f", tax);
    }
    else if (200000 < income < 3000000)
    {
        // calculating the income tax
        tax = income * 0.27;
        // printing the tax
        printf("tax is:%f", tax);
    }
    else
    {
        // calculating the income tax
        tax = income * 0.35;
        // printing the tax
        printf("tax is:%f", tax);
    }
}
int main()
{
    int income = 1000000, tax;
    // function calling
    calculate_income_tax(income, tax);
}
