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

    for (j = 1; j <= 3; ++j) {
        for (k = 1; k <= 3; ++k){
            printf("%d", j * k);
        }
    }
    printf("\n");

    int z;

    for (z = 1; z < 100; z++) {
        if (z == 20) {
            continue;
        }
        if (z == 89) {
            break;
        }
    printf("%d\n", z);
    }

    return 0;
}
