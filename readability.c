#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<math.h>

int main (void)
{
    string s = get_string("text= ");
    int len = strlen(s);
    float l = len;
    float w = 1;
    float e = 0;
    for (int i = 0; i < len ; i++)
    {
        if(s[i] == ' ' || s[i] == '.' || s[i] == '!' || s[i] =='?' || s[i] == ',' || s[i] == '\'')
        {
            l--;
        }

         if(s[i]==' ')
        {
            w++;
        }

        if(s[i] == '.' || s[i] == '!' || s[i] == '?')
        {
            e++;
        }
    }

    float L= ( l/w) * 100;

    float S= (e / w) * 100;

    float index = 0.0588 * L - 0.296 * S - 15.8;


    int a = round(index);
    printf("l = %i, w = %f, e = %i, L = %f, S = %f, X = %i", l w e L S a );
    if (a < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        if (a > 16)
        {
            printf("Grade 16+\n");
        }
        else
        {
            printf("Grade %i\n", a);
        }
    }
}
