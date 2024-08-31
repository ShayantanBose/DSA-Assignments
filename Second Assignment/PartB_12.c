#include <stdio.h>

int main() {
    int weights[5];
    int totalWeight = 0;
    printf("Enter the weights of the five treasures:\n");
    for (int i = 0; i < 5; i++) {
        printf("Weight of treasure %d: ", i + 1);
        scanf("%d", &weights[i]);
        totalWeight += weights[i];
    }
    printf("Total weight of treasures collected: %d\n", totalWeight);

    return 0;
}
