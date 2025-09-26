#include <stdio.h>
int main()
{
    char s[50]="HeLLo";
    int i=0;
    while(s[i]!='\0') 
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i]=s[i]+32;
        i++;
    }
    printf("%s\n",s);
}