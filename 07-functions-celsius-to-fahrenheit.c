#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


double celsius_to_fahrenheit(double celsius) {
    // TODO: return the converted temperature instead of 0.0
	celsius = celsius * 1.8 + 32;
    return celsius;
}

int main(void) {
    double celsius = 0.0;

    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

	printf("%.1f C is %.1f F\n", celsius, celsius_to_fahrenheit(celsius));

    return 0;
}
