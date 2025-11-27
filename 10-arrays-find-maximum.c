#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


#define SIZE 5

int main(void) {
    int values[SIZE];
	printf("Enter up to 5 integers:\n");
	scanf("%d %d %d %d %d", &values[0], &values[1], &values[2], &values[3], &values[4]);
	int max_value = values[0];
	int max_index = 0;  
	for (int i = 1; i < SIZE; i++) {
		if (values[i] > max_value) {
			max_value = values[i];
			max_index = i;
			printf("Largest value: %d at position %d\n", max_value, max_index);
		}
	}


    return 0;
}
