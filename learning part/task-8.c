#include<stdio.h>
int main()
{
    char ab[26] = "nisaapinni";

    int i , count = 0 ;
    for(i = 0 ; ab[i] != '\0' ; i++)
    {
         printf("%c\n",ab[i]);
         if((ab[i]-'a')%2 == 0)
         {
             count++;
             printf("%c = %d",ab[i]-'a',count);
         }
        ab[i] = '\0';
    }

}
