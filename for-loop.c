# include <stdio.h>

int main() {
    int i;

    for (i = 0; i < 5; i++) {
        printf("%d\n", i);
    }

    int sum = 0;
    int number;

    for (number = 0; number <= 6; number++) {
        sum = sum + number;
    }
    printf("sum is %d\n", sum);

    int j, k;

    for (j = 0; j <= 5; j++) {
        for (k = 0; k <= 5; k++);
        printf("%d\n", j * k);
    }
    printf("\n");

    return 0;
}
