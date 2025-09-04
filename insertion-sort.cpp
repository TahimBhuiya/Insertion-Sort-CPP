#include <iostream>
using namespace std;



// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {

    // Start from the second element (index 1) because
    // the first element alone is already "sorted"
    for (int i = 1; i < n; i++) {
        int key = arr[i];    // The element we want to insert into the sorted portion
        int j = i - 1;       // Index of the last element in the sorted portion
    
        // Shift elements of arr[0..i-1] that are greater than 'key'
        // one position ahead to make space for the key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // Shift the element to the right
            j--;                 // Move to the previous element
        }
    
        // Place the key in its correct sorted position    
        arr[j + 1] = key;
    
    
    
    }
}

// Function to print the array elements
void printArray(int arr[], int n) {

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // Print each element separated by space
    }
    cout << endl;
}


int main() {

    // Example array to be sorted
    int arr[] = {12, 11, 13, 5, 6};

    // Calculate the number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n); // Print before sorting

    insertionSort(arr, n); // Call insertion sort
}