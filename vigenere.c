//Vigenere
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
//enter key and text
int main(int argc, string argv[])//check input
{
    if (argc != 2)
    {
        printf("Error message");
        return 1;
    }
    
    string key = argv[1];
    unsigned long keyCount = strlen(key);
    
    for (int k = 0; k < keyCount; k++)
    {
        if (!isalpha(key[k]))
        {
            printf("Error message");
            return 1;
        }
    }
    string text = GetString();
    if (text == NULL)
    {
        printf("Error message");
        return 1;
    }
    //coding text
    for (int i = 0, l = 0; i < strlen(p); i++)
    {
        if (isalpha(text[i]))
        {
            if (islower(text[i]))
                printf("%c", ((((text[i] - 'a') + ((tolower(key[l++%strlen(key)])) - 'a') % 26) % 26) + 'a'));	//Small letter
            
            if (isupper(text[i]))
                printf("%c", ((((text[i] - 'A') + ((toupper(key[l++%strlen(key)])) - 'A') % 26) % 26) + 'A'));  // Capital letter
        }
        else
            printf("%c", text[i]);
    }
    printf("\n");
    return 0;
}
