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

    int age[] = {10, 25, 26, 40, 3, 56, 5, 41, 45, 50, 69};

    float avg, sum = 0;
    int j;

    int length2 = sizeof(age) / sizeof(age[0]);

    for (j = 0; j < length2; j++) {
        sum += age[i];
    }

    avg = sum / length;

    printf("%.2f\n", avg);

    int lowestAge = age[0];

    for (j = 0; j < length2; j++) {
        if (lowestAge > age[j]) {
            lowestAge = age[j];
        }
    }
    printf("%d\n", lowestAge);

    // Multidimensional Arrays

    int matrix [3] [4] = {{3, 6, 1, 9}, {4, 5, 8, 2}};
    printf("%d\n", matrix[0] [2]);

    int matrix2 [3] [6]= {{2, 1, 3, 5, 6}, {4, 7, 9, 8, 0}};

    int k, l;

    for (k = 0; k < 6; k++) {
        for (l = 0; l < 9; l++) {
            printf("%d", matrix2[k] [l]);
        }
    }
    
    return 0;
}
