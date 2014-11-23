#include <stdio.h>

void duplicate_chars(char str[])
{
    bool chars[256];
    for(int i = 0; str[i] != '\0'; i++) {
        int ord = str[i];
        if (chars[ord]){
            printf("%s has dups\n", str);
            return;
        }
        chars[ord] = true;
    }
    printf("%s no dups\n", str);
}

void duplicate_chars_2(char str[]) 
{
    for(int i = 0; str[i] != '\0'; i++) {
        for(int j = i+1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                printf("%s has dups\n", str);
                return;
            }
        }
    }
    printf("%s no dups", str);
}

int main()
{
    char str[] = "Hello";
    duplicate_chars((char*)"foo");
    duplicate_chars((char*)"bar");
    duplicate_chars_2((char*)"foo");
    duplicate_chars_2((char*)"bar");
    return 0;
}
