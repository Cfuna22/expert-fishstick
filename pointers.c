# include <stdio.h>

int main() {
    int myAge = 43;
    int* ptr = &myAge;

    printf("%d\n", myAge);
    printf("%p\n", &myAge);
    printf("%p\n", ptr);
    // Dereference
    printf("%d\n", *ptr);

    // Pointers & Arrays

    int numbers[4] = {4, 3, 7, 9};
    int i;

    for (i = 0; i < 4; i++) {
        printf("%p\n", &numbers[i]);
    }
}
