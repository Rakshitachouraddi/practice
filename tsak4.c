#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[50];
    int j=0;
    printf("enter the statement\n");
   // fgets(str,50,stdin);
   scanf("%[^\n]s",str);
    puts(str);
    int l=strlen(str);
   printf("\n");
   for(int i=0;str[i]!='\0';i++)
   {
       if(str[i]!=' ')
       {
           str[j++]=str[i];
       }
     else if (j > 0 && str[j - 1] != ' ')
      {
            str[j++] = ' ';
            l--;
      }
   }
   printf("\n");
  // puts(str);
   for(int i=0;i<l;i++)
   {
       printf("%c",str[i]);
   }
    return 0;
}



/*

4)Remove all extra spaces from the string.
Input:  str = ""   Hello    world   from   C   ""
Output: str = ""Hello world from C""*/
