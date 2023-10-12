#include <stdio.h>


int add(int a, int b);

int main() {
    int num1 = 22;
    int num2 = 33;

    int sum = add(num1, num2);
    
    printf("Addition: %d\n", sum);

    return 0;
}