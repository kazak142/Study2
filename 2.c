#include <stdio.h>

int main(void) {
    int x;

    printf("Введите целое число: ");
    scan("%d", &x)
    printf("Вы ввели: %d\n", x);
    return 0;
}
