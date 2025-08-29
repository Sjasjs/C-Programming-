#include <stdio.h>

int main() 
{
    int a, b, c, largest, smallest;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
    
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
    
    return 0;
}