#include <stdio.h>
#include <string.h>

void is_rotation(char str1[], char str2[]) 
{
    int len1 = strlen(str1);
    char str3[2 * len1];

    for(int i = 0; i < 2 * len1; i++) {
        str3[i] = str1[i % len1];
    }

    printf("%s", str3);
    if (strstr(str3,str2)) {
        printf("\n%s is a rotation of %s\n", str1, str2);
        return;
    }
    printf("\n%s is not a rotation of %s\n", str1, str2);
}

int main() {

    char str1[] = "erbottlewat";
    char str2[] = "waterbottle";

    is_rotation(str1, str2);

    return 1;
}
