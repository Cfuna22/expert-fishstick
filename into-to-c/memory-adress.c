#include <stdio.h>
#include <stdint.h>

int main() {
    int myAge = 43;
    printf("%p\n", (void *)&myAge);

    return 0;
}
