#include <stdio.h>
#include <ctype.h>

int main()
{
    char temp;
    printf("Enter a charcter to check : ");
    scanf("%c",&temp);
    if(isalpha(temp))
    {
        if(toupper(temp) == 'A' || toupper(temp) == 'E' || toupper(temp) == 'I' || toupper(temp) == 'O' || toupper(temp) == 'U')
            printf("%c is a vowel", toupper(temp));
        else
            printf("%c is consonant", temp);
    }
    else
        printf("%c is not an alphabet",temp);
}

// toupper()
// it change  alphabet is uppercase or not