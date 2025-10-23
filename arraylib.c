#include <stdio.h>
#include "arraylib.h"

// #Cp

// Find index of largest element
int getMaxIndex(int arr[], int n) {
    int maxPos = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxPos])
            maxPos = i;
    }
    return maxPos;
}

// Find index of smallest element
int getMinIndex(int arr[], int n) {
    int minPos = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minPos])
            minPos = i;
    }
    return minPos;
}

// Calculate average of array
float computeAverage(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++)
        total += arr[i];
    return (float)total / n;
}

// Display array elements
void showArray(int arr[], int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Reverse array elements
void flipArray(int arr[], int n) {
    for (int start = 0, end = n - 1; start < end; start++, end--) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
}

// Sort array (ascending)
void arrangeArray(int arr[], int n) {
    for (int pass = 0; pass < n - 1; pass++) {
        for (int j = 0; j < n - pass - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Search for a value and return index
int searchValue(int arr[], int n, int val) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == val)
            return i;
    }
    return -1;
}
