#include <stdio.h>

int main() {
    int i, num, p = 0;
    
    printf("Enter any number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("The number is not prime\n");
        return 0;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            p++;
            break;
        }
    }

    if (p == 0) {
        printf("The number is prime\n");
    } else {
        printf("The number is not prime\n");
    }

    return 0;
}

