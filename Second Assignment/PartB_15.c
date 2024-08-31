#include <stdio.h>
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return 1;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return 0;
}
int main() {
    int bookIDs[] = {101, 123, 145, 167, 189, 210, 233, 256, 278, 299};
    int size = sizeof(bookIDs) / sizeof(bookIDs[0]);
    int target;
    printf("Enter the book ID to search: ");
    scanf("%d", &target);
    if (binarySearch(bookIDs, size, target))
        printf("Book with ID %d is available.\n", target);
    else
        printf("Book with ID %d is not available.\n", target);
    return 0;
}
