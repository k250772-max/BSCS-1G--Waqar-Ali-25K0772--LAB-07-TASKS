#include <stdio.h>

int main() {
    char arr[100];
    int vowels = 0, consonants = 0;
    int i = 0;

    printf("Enter a word: ");
    scanf("%s", arr);

    while (arr[i] != '\0') {
        char ch = arr[i];

        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else {
            consonants++;
        }

        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}

