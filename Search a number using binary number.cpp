#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Return the index if the target is found
        } else if (arr[mid] < target) {
            left = mid + 1; // Search the right half
        } else {
            right = mid - 1; // Search the left half
        }
    }

    return -1; // Return -1 if the target is not found
}

int main() {
    int arr[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    printf("Enter the number to search for: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Number found at index %d\n", result);
    } else {
        printf("Number not found in the array.\n");
    }

    return 0;
}

