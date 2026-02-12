#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if (ch >= 48 && ch <= 57)
    {
        printf("Digit");
    }
    else if (ch>=48 && ch<=57)
    {
        printf("Not a Digit");
    }
    return 0;
}
