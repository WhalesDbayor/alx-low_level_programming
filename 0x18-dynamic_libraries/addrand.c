#include <stdio.h>

/**
 * main - check the code
 *
 * Return: 0 if successful.
 */
int main() {    

    int a, b, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // calculating sum
    sum = a + b;
    
    printf("%d + %d = %d", a, b, sum);
    return 0;
}

