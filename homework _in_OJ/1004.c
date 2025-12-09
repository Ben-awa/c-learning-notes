#include <stdio.h>
#include <string.h>

int main()
{
    char c[100] = {'\0'};
    gets(c);
    for (int i = 0; i <= strlen(c)-1; i++)
    {
        if (c[i] != 'A')
            printf("%c",c[i]);
    }
    return 0;
}