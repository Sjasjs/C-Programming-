#include <stdio.h>

int main()
{
    float gross_sales, net_sales, discount;
    float discount_rate;
    
    printf("Enter gross sales: ");
    scanf("%f", &gross_sales);
    
    if (gross_sales > 20000) 
    {
        discount_rate = 0.15;
    } 
    else if (gross_sales < 20000) 
    {
        discount_rate = 0.10;
    } 
    else
    {
        discount_rate = 0.05;
    }
    
    discount = gross_sales * discount_rate;
    net_sales = gross_sales - discount;
    
    printf("\n--- Sales Details ---\n");
    printf("Gross Sales: Rs. %.2f\n", gross_sales);
    printf("Discount (%.0f%%): Rs. %.2f\n", discount_rate * 100, discount);
    printf("Net Sales: Rs. %.2f\n", net_sales);
    
    return 0;
}