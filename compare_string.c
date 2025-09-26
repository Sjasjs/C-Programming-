#include <stdio.h>
int main()
    {
    char s1[50]="Hello", s2[50]="Hello";
    int i=0,flag=0;
    while(s1[i]!='\0' || s2[i]!='\0') 
    {
        if(s1[i]!=s2[i]) 
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
        printf("Equal\n");
    else
        printf("Not Equal\n");
}