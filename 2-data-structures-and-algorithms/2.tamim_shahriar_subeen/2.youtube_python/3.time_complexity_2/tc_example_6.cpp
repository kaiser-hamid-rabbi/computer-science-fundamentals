# include <stdio.h>

// Time Complexity of this program is = O(n^2 + n ) ~ O(n^2) (because n^2 is significantly large than n, so we can ignore that value!)
// O(n! + n^3 +n) ~ O(n!)
// O(n^3 +n) ~ O(n^3)
// O(4n^4 + 2n^3 + 5n) ~ O(n^4)
int main()
{
    int i, j, n = 100, count = 0;

    // scanf("%d", &n);

    // Time Complexity of this nested loop is = O(n^2)
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            count = count + 1;
            }
        }

    // Time Complexity of this nested loop is = O(n)
    for (i = 0; i < n; i++){
        count = count + 1;
    }

    printf("count = %d\n", count);

    return 0;
}
