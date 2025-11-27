#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int score = 0;

    printf("Enter a score between 0 and 100: ");
    scanf("%d", &score);
    if (score >= 90 && score <= 100) {
        printf("Score %d: A - Excellent!\n", score);
    } else if (score >= 80 && score < 90) {
        printf("Score %d: B - Great job!\n", score);
    } else if (score >= 70 && score < 80) {
        printf("Score %d: C - Keep practicing.\n", score);
    } else if (score >= 60 && score < 70) {
        printf("Score %d: D - You barely failed.\n", score);
    } else if (score >= 0 && score < 60) {
        printf("Score %d: F - Needs more study.\n", score);
    } else {
        printf("Invalid score entered. Please enter a score between 0 and 100.\n");
	}
    // Insert your if/else-if/else chain here.

return 0;