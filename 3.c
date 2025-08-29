#include <stdio.h>

int main() 
{
    float gross_salary, net_salary, allowances, deductions;
    
    printf("Enter gross salary: ");
    scanf("%f", &gross_salary);
    
    if (gross_salary > 10000) 
    {
        allowances = gross_salary * 0.10;
        deductions = gross_salary * 0.03;
    } 
    else if (gross_salary < 10000)
     {
        allowances = gross_salary * 0.07;
        deductions = gross_salary * 0.02;
    } 
    else 
    {
        allowances = 0;
        deductions = 0;
    }
    
    net_salary = gross_salary + allowances - deductions;
    
    printf("\n--- Salary Details ---\n");
    printf("Gross Salary: Rs. %.2f\n", gross_salary);
    printf("Allowances: Rs. %.2f\n", allowances);
    printf("Deductions: Rs. %.2f\n", deductions);
    printf("Net Salary: Rs. %.2f\n", net_salary);
    
    return 0;
}
