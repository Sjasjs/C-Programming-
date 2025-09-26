#include <stdio.h>
int main() 
{
    char s1[50]="Hello", s2[50];
    int i=0;
    while(s1[i]!='\0') 
    {
        s2[i]=s1[i];
        i++;
    }
    s2[i]='\0';
    printf("%s\n",s2);
}