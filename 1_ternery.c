#include <stdio.h>

int main() {
    int num1, num2, largest, smallest;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    largest = (num1 > num2) ? num1 : num2;
    smallest = (num1 < num2) ? num1 : num2;
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
    
    return 0;
}