#include <stdio.h>

void reverse_string(char str[]) {
    char temp;
    int length = 0;
    for(length = 0; str[length] != '\0'; length++) {}

    for(int i = 0; i < (int)(length * 0.5); i++) {
        temp = str[i];
        str[i] = str[length-1-i];
        str[length-1-i] = temp;
    }
    printf("%s\n", str);
}

int main() {
    
    char str1[] = "foo";
    reverse_string(str1);

    char str2[] = "foo bar!";
    reverse_string(str2);

    return 0;
}
