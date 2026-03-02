#include<stdio.h>
int isvowel(char ch)
{
    char ch1=ch;
    if(ch1=='a'||ch1=='e'||ch1=='i'||ch1=='o'||ch1=='u')
    {
    return 1;
    }
    else
    {
        return 0;
    }
    
}

void removevowels(char *ch, int n)
{
    int i, k=0;

    for(i = 0; i < n; i++)
    {
        printf("before removing\n");
         for(int i = 0; i < n; i++)
        {
            printf("%c ",ch[i]);
        printf("\nbefore sending to is vowel=%c\n",ch[i]);
        if(isvowel(ch[i]))
        {
            for(k=i;k<n;k++)
           {
              ch[k]=ch[k+1];
           }
           n--;
        }
    }
     printf("After removing vowels:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%c ",ch[i]);
    }
}
}

int main()
{   
    char ch[10] = "education";
    removevowels(ch,10);
    return 0;
}

