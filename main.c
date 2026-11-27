#include <stdio.h>
#include <stdlib.h>

int gcd(int m, int x)
{
    int remainder;
    int a = m;
    int b = x;

    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    return abs(a);
}

int main(void)
{
    int inputNumber;

    scanf("%d", &inputNumber);

    if (inputNumber > 9966990) {
        printf("NG");
        return 0;
    }

    printf("%d", gcd(9966990, inputNumber));

    return 0;
}