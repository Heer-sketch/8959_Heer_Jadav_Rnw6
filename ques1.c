//Write a program in c to check whether a number is even or odd using a user defined function
#include <stdio.h>

int isEven(int number);

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isEven(num)) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}

int isEven(int number) {
    return (number % 2 == 0);
}
