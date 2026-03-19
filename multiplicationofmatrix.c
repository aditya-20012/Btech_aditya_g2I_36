#include <stdio.h>

int main() {
    int m, n, p, q, c, d, k, sum = 0;
    int first[10][10], second[10][10], multiply[10][10];

    printf("Enter rows/cols for 1st matrix: ");
    scanf("%d%d", &m, &n);
    printf("Enter rows/cols for 2nd matrix: ");
    scanf("%d%d", &p, &q);

    if (n != p) {
        printf("Multiplication not possible.\n");
    } else {
        printf("Enter 1st matrix elements:\n");
        for (c = 0; c < m; c++)
            for (d = 0; d < n; d++) scanf("%d", &first[c][d]);

        printf("Enter 2nd matrix elements:\n");
        for (c = 0; c < p; c++)
            for (d = 0; d < q; d++) scanf("%d", &second[c][d]);

        for (c = 0; c < m; c++) {
            for (d = 0; d < q; d++) {
                sum = 0;
                for (k = 0; k < n; k++) sum += first[c][k] * second[k][d];
                multiply[c][d] = sum;
            }
        }

        printf("Product Matrix:\n");
        for (c = 0; c < m; c++) {
            for (d = 0; d < q; d++) printf("%d\t", multiply[c][d]);
            printf("\n");
        }
    }
    return 0;
}