#include <stdio.h>
//Amazing property of printf function to return the number of characters successfully printed.
//Also, if we use %c instead of %d, it prints the strings in reverse order.
int main()
{
    printf("Atri Thaker %d\n", printf("Hello %d\n", printf("Good Morning\n")));
    printf("=============\n");
    printf("Atri Thaker %c\n", printf("Hello %c\n", printf("Good Morning\n")));
    return 0;
}
