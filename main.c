#include <stdio.h>

int main() {
    char name = 'A';
    printf("Hello%c\n", name);
    float Mynum = 90.9;
    int today = 20;
    printf("%d\n", today);
    printf("%c\n", name);
    printf("%f\n", Mynum);

    printf("this is my Number: %d and this is my Letter: %c\n", today, name);

    int number = 10;
    int otherNumber = 15;
    number = otherNumber + number;
    printf("%d\n",number);

    int x = 2, y = 6, z = 10;
    printf("%d\n", x+y+z);

    int length = 10;
    int width = 6;
    int area;
    area = length * width;
    printf("Length is %d\n", length);
    printf("Width is %d\n", width);
    printf("Area of the rectangle is %d\n", area);

    char a = 65, b = 66, c = 67;
    printf("%c", a);
    printf("%c", b);
    printf("%c\n", c);

    float myFloat = 6;
    double myDouble = 20;

    printf("%.3f and %.1lf", myFloat, myDouble);

    int myInt;
    char myChar;
    float my_float;
    double my_double;
    printf("%zu\n", sizeof(myInt));
    printf("%zu\n", sizeof(myChar));
    printf("%zu\n", sizeof(my_float));
    printf("%zu\n", sizeof(my_double));

    float sum = (float) 12 / 7;
    printf("%f\n", sum);
    return 0;
}
