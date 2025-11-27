#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



double average_of_three(int a, int b, int c) {
	average_of_three = (a + b + c) / 3.0;
    return 0.0;
}

int main(void) {
    int first = 0;
    int second = 0;
    int third = 0;

    printf("Enter three integers separated by spaces: ");
    scanf("%d %d %d", &first, &second, &third);

	printf("Average: %.1f\n", average_of_three(first, second, third));

    return 0;
}
