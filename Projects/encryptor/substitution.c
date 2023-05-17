#include<stdio.h>
#include<cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, string argv[])
{
    string s = argv[1];
//validate the key
    if(strlen(s)!=26)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    if(argc!=2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    for(int i=0; i<26; i++)
    {
       if(isalpha (s[i])==0)
       {
           printf("Usage: ./substitution key\n");
           return 1;
       }
    }
     for (int i = 0; i < 26; i++)
     {
        for (int j = i + 1; j < 26; j++)
        {
           if (s[i] == s[j])
           {
               printf("Usage: ./substitution key\n");
               return 1;
           }
        }
     }
     for (int i = 0; i < 26; i++)
     {
        for (int j = i + 1; j < 26; j++)
        {
           if ( toupper (s[i]) == toupper (s[j]))
           {
               printf("Usage: ./substitution key\n");
               return 1;
           }
        }
     }
    //get plaintext
    string p = get_string("plaintext: ");
    int l = strlen(p);
 
   printf("ciphertext: ");
   for(int i=0; i<l; i++)
   {
       if(isalpha(p[i])==0)
       {
           printf("%c",p[i]);
       }
       else
       {
          if(islower(p[i]))
          {
              int a = p[i];
              int b = a-97;
              printf("%c",tolower(s[b]));
          }
          else
           {
              int x = p[i];
              int y = x-65;
              printf("%c",toupper(s[y]));

          }
       }
   }
   printf("\n");
}