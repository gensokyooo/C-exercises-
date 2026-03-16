#include <iostream>
using namespace std;

// Problem: Write a void function named shift_left(int arr[], int n, int k) that takes as parameters
// an integer array arr, its size n, and an integer k.
// The function must shift all elements of the array to the left by k positions,
// filling the vacated positions with zeros.

void shift_left (int arr[], int n, int k) {

    // Assigning values to first k positions
    for (int i = 0; i < n-k; i ++) {
        arr[i] = arr[i+k];
    }

    // Filling up the remaining positions with zeros

    for (int i = n-k ; i < n; i++) {
        arr[i] = 0;
    }
}

int main () {
    int arr [5]= {1,2,3,4,5};
    int n = 5;
    int k = 2;
}