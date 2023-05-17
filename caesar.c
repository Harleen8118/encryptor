#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, string argv[])
{
    string s = argv[1];
    int len = strlen(s);
    for(int i=0; i<len; i++)
    {
       if(isdigit (s[i])==0)
       {
           printf("Usage: ./caesar key\
n");
           return 0;
       }
    }

     if (argc!=2)
     {
         printf("Usage: ./caesar key\n");
          return 0;
     }
    int num = atoi(s);

    string p = get_string("plaintext: ");
    int l = strlen(p);

    printf("ciphertext: ");
    for(int i=0; i<l; i++)
    {
        if(isalpha (p[i]) == 0)
        {
            printf("%c",p[i]);
        }
        else
        {
            if(islower(p[i]))
            {
                int a = p[i];

                int b = a-97;

                int c = (b + num) % 26;

                int d = c+97;
                printf("%c",d);
            }
            else
            {
                int e = p[i];

                int f = e-65;

                int g = (f + num) % 26;

                int h = g+65;
                printf("%c",h);
            }
        }
    }
    printf("\n");
}
