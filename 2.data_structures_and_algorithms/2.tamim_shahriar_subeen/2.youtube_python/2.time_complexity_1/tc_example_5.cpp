# include <stdio.h>

// Time Complexity of this program is = O(n^3)
int main()
{
    int i, j, k, n = 100, count = 0;

    // scanf("%d", &n);

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            for (k = 0; k < n; k++){
                count = count + 1;
            }
        }
    }

    printf("n = %d, count = %d\n", n, count);

    return 0;
}
