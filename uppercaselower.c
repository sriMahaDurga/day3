#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase Letter\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase Letter\n");
    else
        printf("Not an alphabet\n");
    return 0;
}
