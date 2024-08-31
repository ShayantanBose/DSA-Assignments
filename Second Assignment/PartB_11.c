#include <stdio.h>
#include <stdlib.h>
int main() {
    int initialCapacity = 10;
    int currentSize = 0;
    int *inventory = (int *)malloc(initialCapacity * sizeof(int));
    if (inventory == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for (int i = 0; i < initialCapacity; i++) {
        inventory[i] = i + 1;
        currentSize++;
    }
    printf("Initial Inventory:\n");
    for (int i = 0; i < currentSize; i++) {
        printf("Packet %d\n", inventory[i]);
    }
    int newCapacity = 20;
    inventory = (int *)realloc(inventory, newCapacity * sizeof(int)); 
    if (inventory == NULL) {
        printf("Memory reallocation failed!\n");
        free(inventory); 
        return 1;
    }
    for (int i = currentSize; i < newCapacity; i++) {
        inventory[i] = i + 1;
        currentSize++;
    }
    printf("\nExpanded Inventory:\n");
    for (int i = 0; i < currentSize; i++) {
        printf("Packet %d\n", inventory[i]);
    }
    newCapacity = 5;
    inventory = (int *)realloc(inventory, newCapacity * sizeof(int));
    if (inventory == NULL) {
        printf("Memory reallocation failed!\n");
        free(inventory); 
        return 1;
    }
    currentSize = newCapacity;
    printf("\nShrunk Inventory:\n");
    for (int i = 0; i < currentSize; i++) {
        printf("Packet %d\n", inventory[i]);
    }
    free(inventory);
    return 0;
}
