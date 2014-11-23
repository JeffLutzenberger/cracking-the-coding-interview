#include <stdio.h>
#include <string.h>

void anagram(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2) {
        printf("%s and %s are not anagrams\n", str1, str2);
        return;
    }

    int char_count1[256];
    int char_count2[256];
    for (int i = 0; i < 256; i++) {
        char_count1[i] = 0;
        char_count2[i] = 0;
    }

    for (int i = 0; i < len1; i++) {
        char_count1[str1[i]]++;
        char_count2[str2[i]]++;
    }
 
    for (int i = 0; i < 256; i++) {
        if (char_count1[i] != char_count2[i]) {
            printf("%s and %s are not anagrams\n", str1, str2);
            return;
        }
    }

    printf("%s and %s are anagrams\n", str1, str2);
}

int main() {

    char str1[] = "anagram";
    char str2[] = "gramana";
    char str3[] = "foo";
    char str4[] = "bar";
    anagram(str1, str2);
    anagram(str3, str4);
}
