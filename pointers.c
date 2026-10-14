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

    //  How Are Pointers Related to Arrays
    // Ok, so what's the relationship between pointers and arrays? Well, in C, the name of an array, is actually a pointer to the first element of the array.

    // Confused? Let's try to understand this better, and use our "memory address example" above again.

    // The memory address of the first element is the same as the name of the array:

    printf("%p\n", numbers);
    printf("%d\n", *numbers);
    printf("%p\n", &numbers[0]);

    *numbers = 13;
    *(numbers + 4) = 17;
    printf("%d\n", *numbers);
    printf("%d\n", *(numbers + 3));
}
