#include <stdio.h>
#include <string.h>

int main() {
    char num1[101], num2[101];

    scanf("%s %s", num1, num2);

    int len1 = strlen(num1);
    int len2 = strlen(num2);

    if (len1 < len2) printf("%s\n%s\n", num1, num2);
    else if (len1 > len2) printf("%s\n%s\n", num2, num1);
    else {
        if (strcmp(num1, num2) < 0) printf("%s\n%s\n", num1, num2);
        else printf("%s\n%s\n", num2, num1);
    }

    return 0;
}