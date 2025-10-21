#include <stdio.h>

int main()
{
    int n, i, j, k;
    printf("Enter the size n (n x n matrix): ");
    scanf("%d", &n);

    int m[n][n];

    printf("Enter the matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            k = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = k;
        }
    }

    printf("\nMatrix after symmetry:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
eturn 0;}
