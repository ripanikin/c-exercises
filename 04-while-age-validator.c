#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
    int age = -1;
	printf("Enter age: ");
	scanf("%d", &age);
    while (age < 0 || age > 120) {
        printf("Please enter an age between 0 and 120.\n");
        printf("Enter age: ");
        scanf("%d", &age);
	}

    // TODO: add your while loop here to validate the input.

    return 0;
}
