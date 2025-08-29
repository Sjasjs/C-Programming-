#include <stdio.h>

int main() {
    int num1, num2, largest, smallest;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    if (num1 > num2)
     {
        largest = num1;
        smallest = num2;
    } 
    else 
    {
        largest = num2;
        smallest = num1;
    }
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
    
    return 0;
}