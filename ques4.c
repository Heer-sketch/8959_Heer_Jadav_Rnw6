//Write a C program to check whether an Alphabet is a vowel or Constant.
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a vowel.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a consonant.\n", ch);
    } else {
        printf("Invalid input. Please enter an alphabet.\n");
    }

    return 0;
}
