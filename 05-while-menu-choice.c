#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int choice = 0;
	printf("Menu:\n 1) Play\n 2) Settings\n 3) Quit\n");
    while (choice < 1 || choice > 3) {
        if (choice != 0) {
            printf("Invalid choice. Please pick 1, 2, or 3.\n");
        }
        printf("Choose an option (1-3): ");
        scanf("%d", &choice);
	}

    

   

    return 0;
}
