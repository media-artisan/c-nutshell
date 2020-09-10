#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int main() {
    //bool is an integer 0 or 1
    bool isTrue = true;
    printf("Hello, World! Nothing is true except %d\n", isTrue);

    //char treated as character and integer
    char ch = 'A';
    printf("The character %c is of value %d\n", ch, ch);
    for(;ch<='Z'; ch++ ) {
        printf("%2c",ch);
    }
    printf("\nMAX Size of char is %u\n", (unsigned int)sizeof(CHAR_MAX));
    //going beyond data type capability causes remainder of division by max value +1
    unsigned int ui = UINT_MAX;
    ui +=5;
    printf("New size of ui is %d\n", ui);
    enum seq  {first, second, third, fourth, nineth=8, tenth};
    printf("first is %d, tenth is %d\n", first, tenth);
    return 0;
}