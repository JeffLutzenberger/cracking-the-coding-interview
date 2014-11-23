#include <stdio.h>
#include <string.h>

void remove_dups(char str[]) {
    //no additional data structure
    //loop over string on char at a time
    //if dup found remove dup and recreate string
    int len = strlen(str);
    int unique = 1;
    char* str2;
    for(int i = 0; str[i] != '\0'; i ++) {
        printf("%c: ", str[i]);
        for(int j = i+1; str[j] != '\0'; j++) {
            if(str[i] == str[j]) {
                //shift string starting at j
                for(int k = j; str[k] != '\0'; k++) {
                    str[k] = str[k+1];
                }
                j--;
            }
        }
        printf("%s\n", str);
    }
    printf("%s\n", str);
}

int main() {
    char str[] = "hello foo bar too!";
    remove_dups(str);
    char str2[] = "aaaaa";
    remove_dups(str2);
    return 0;
}
