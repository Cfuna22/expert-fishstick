# include <stdio.h>

void Today() {
    int myAge = 20;
    char names[] = "Abel Sifuna";

    char *ptr = &names[0];
    int *myAgeptr = &myAge;

    printf("%p\n", &ptr);
    printf("%p\n", &myAgeptr);
}

int main() {
    Today();
}
