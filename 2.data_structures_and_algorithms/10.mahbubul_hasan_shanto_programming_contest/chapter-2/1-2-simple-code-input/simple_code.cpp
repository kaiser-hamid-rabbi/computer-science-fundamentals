#include<stdio.h>
#include<math.h>

// 2.1 + 2.2
int main()
{
    printf("\nSummation of 6 and 4 is: %d, Difference is: %d\n", 6+4, 6-4);

    int a, b;
    printf("Please enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Summation is: %d, Difference is: %d\n", a+b, abs(a-b));
    return 0;
}
