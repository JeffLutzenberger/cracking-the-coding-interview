#include <stdio.h>
#include <string.h>

void replace_space(char str[]) 
{
    int len = strlen(str);
    //count spaces
    int spaces = 0;
    for(int i = 0; i < len; i++) {
        char a = str[i];
        char b = ' ';
        if(a == b) spaces++;
    }

    const int new_len = len + spaces * 2;
    char str2[new_len];

    int pos = 0;
    for(int i = 0; i < len; i++) {
        char a = str[i];
        char b = ' ';
        if(a == b) {
            str2[pos++] = '%';
            str2[pos++] = '2';
            str2[pos++] = '0';
        } else {
            str2[pos++] = str[i];
        }
    }
    strcpy(str, str2);
    printf("%s\n", str);
}

int main() 
{
    char str[] = "string with spaces";
    replace_space(str);
    printf("%s\n", str);
    return 0;
}
