#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int number = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("Zero is even.\n");
    } else if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
	}

    // Add your if/else statements here to print the correct message.

    return 0;