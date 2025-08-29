#include <stdio.h>

int main() 
{
    float mark1, mark2, mark3;
    float total, average;
    
    printf("Enter marks for three subjects: ");
    scanf("%f %f %f", &mark1, &mark2, &mark3);
    
    if (mark1 < 35 || mark2 < 35 || mark3 < 35) 
    {
        printf("\n--- Result ---\n");
        printf("Status: FAIL\n");
        printf("Reason: Student has scored less than 35 marks in at least one subject\n");
        
        if (mark1 < 35) printf("Subject 1: %.2f (FAIL)\n", mark1);
        else printf("Subject 1: %.2f (PASS)\n", mark1);
        
        if (mark2 < 35) printf("Subject 2: %.2f (FAIL)\n", mark2);
        else printf("Subject 2: %.2f (PASS)\n", mark2);
        
        if (mark3 < 35) printf("Subject 3: %.2f (FAIL)\n", mark3);
        else printf("Subject 3: %.2f (PASS)\n", mark3);
        
        return 0;
    }
    
    total = mark1 + mark2 + mark3;
    average = total / 3.0;
    
    printf("\n--- Result ---\n");
    printf("Subject 1: %.2f\n", mark1);
    printf("Subject 2: %.2f\n", mark2);
    printf("Subject 3: %.2f\n", mark3);
    printf("Total: %.2f\n", total);
    printf("Average: %.2f\n", average);
    printf("Grade: ");
    
    if (average >= 70) 
    {
        printf("Distinction\n");
    } 
    else if (average >= 60) 
    {
        printf("First Class\n");
    } 
    else if (average >= 50) 
    {
        printf("Second Class\n");
    } 
    else if (average >= 35) 
    {
        printf("Third Class\n");
    } 
    else
    {
        printf("Fail\n");
    }
    
    return 0;
}