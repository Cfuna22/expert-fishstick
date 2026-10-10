# include <stdio.h>

int main() {
    int myNumber[] = {35, 50, 60, 71, 75, 89, 97, 98, 99};

    printf("%d\n", myNumber[1]);

    int length = sizeof(myNumber) / sizeof(myNumber[0]);
    printf("%d\n", length);
    printf("%zu\n",sizeof(myNumber));

    int i;
    for (i = 0; i < length; i++) {
        printf("%d\n", myNumber[i]);
    }
}
