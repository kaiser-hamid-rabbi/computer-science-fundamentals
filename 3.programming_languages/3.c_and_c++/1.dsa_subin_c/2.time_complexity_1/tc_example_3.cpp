# include <stdio.h>

// Time Complexity of this program is = O(n)
int main()
{
    int i, n = 10, result = 0;

    // scanf("%d", &n);

    for (i = 1; i <= n; i++){
        result = result + i;
    }

    printf("result = %d\n", result);

    return 0;
}
