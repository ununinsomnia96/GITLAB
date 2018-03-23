#include<stdio.h>

float subtract(float a, float b) {
    return a - b;
}

int main() {
    float a, b;
    scanf("%f%f", &a, &b);
    printf("%f - %f = %f", a, b, subtract(a, b));
    return 0;
}

