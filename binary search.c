#include <stdio.h>

int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == key) {
            return mid;  // Element found
        }
        else if(arr[mid] < key) {
            low = mid + 1;  // Search in the right half
        }
        else {
            high = mid - 1;  // Search in the left half
        }
    }

    return -1;  // Element not found
}

int main() {
    int n, key, result;

    // Input: Number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input: Elements of the array (should be sorted)
    printf("Enter %d sorted elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: Element to search for
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Perform binary search
    result = binarySearch(arr, n, key);

    // Output: Result of the search
    if(result != -1) {
        printf("Element %d found at index %d.\n", key, result);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
