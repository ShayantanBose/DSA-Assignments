#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    char number[100];
    int count = 0;

    printf("Enter the number: ");
    scanf("%s", number);

    int length = 0;
    while (number[length] != '\0') length++;

    for (int i = 0; i < length - 1; i++) {
        int twoDigitNumber = (number[i] - '0') * 10 + (number[i + 1] - '0');
        if (isPrime(twoDigitNumber)) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
