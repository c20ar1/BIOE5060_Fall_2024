#include <stdio.h>
#include <stdlib.h>

void collatz(int num) {
    while (num != 1) {
        printf("%d, ", num);
        if (num % 2 == 0) {
            num /= 2;
        } else {
            num = 3 * num + 1;
        }
    }
    printf("1");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: ./collatz num\n");
        return 1;
    }

    int num = atoi(argv[1]);
    if (num <= 0) {
        printf("Please provide a positive integer.\n");
        return 1;
    }

    collatz(num);
    return 0;
}

