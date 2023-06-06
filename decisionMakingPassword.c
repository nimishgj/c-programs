#include <stdio.h>
#include <string.h>

typedef enum
{
    false,
    true
} bool;

int main()
{
    bool capitalAlphabet, digit, specialCharacters, smallAlphabet, isPasswdStrong;
    int alphabet = 0, numbers = 0, splchar = 0, i, n;
    char passwd[10];
    printf("Enter the number of Password character:");
    scanf("%d", &n);
    printf("Enter the Password:");
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &passwd[i]);
        if (passwd[i] >= 65 && passwd[i] <= 90)
        {
            capitalAlphabet = true;
            alphabet++;
        }
        if (passwd[i] >= 97 && passwd[i] <= 122)
        {
            smallAlphabet = true;
            alphabet++;
        }
        if (passwd[i] >= 0 && passwd[i] <= 9)
        {
            digit = true;
            numbers++;
        }
        if (passwd[i] >= 33 && passwd[i] < 47)
        {
            specialCharacters = true;
            splchar++;
        }
        if (passwd[i] >= 58 && passwd[i] <= 64)
        {
            specialCharacters = true;
            splchar++;
        }
        if (splchar > 3 && numbers > 2 && alphabet > 6 && strlen(passwd) > 8)
        {
            isPasswdStrong = true;
        }
    }
    if (isPasswdStrong == true)
    {
        printf("Password is Strong.");
    }
    else
    {
        printf("Weak Password!!");
    }
}
