#include<stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    float a, b;
    scanf("%f%f", &a, &b);
    printf("%f + %f = %f", a, b, sum(a, b));
    return 0;
}
