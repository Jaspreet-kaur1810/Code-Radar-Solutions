#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        // Last i elements are already in place, so no need to check them
        for (int j = 0; j < n-i-1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    // Taking the size of the array as input
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Taking the array elements as input
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Call the bubbleSort function
    bubbleSort(arr, n);
    
    // Print the sorted array
    printf("Sorted array: ");
    printArray(arr, n);
    
    return 0;
}
