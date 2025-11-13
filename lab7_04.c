#include <stdio.h>

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("Inside function after swapping: x=%d, y=%d\n", x, y);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Before function call: a=%d, b=%d\n", a, b);
    swap(a, b);
    printf("After function call: a=%d, b=%d (values not changed)\n", a, b);
    return 0;
}
