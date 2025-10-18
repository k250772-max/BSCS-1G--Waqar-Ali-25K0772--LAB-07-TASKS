#include <stdio.h>

int main() {
    char str[100];

    printf("Enter characters : ");
    scanf("%[^A-Za-z]", str);   

    printf("THE ENTERED CHARACTERS ARE : %s\n", str);

    return 0;
}

