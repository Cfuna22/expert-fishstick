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
}
