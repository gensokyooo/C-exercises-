#include <iostream>
using namespace std;

// Problem: Write a function mostFrequent that returns an int.
//The function takes as input an array of integers and its length,
//and returns the most frequent element in the array.
// If multiple elements have the same maximum frequency,
// the function may return any one of them.

int mostFrequent (int arr[], int length) {

    int maxcount = 0;
    int element = 0;

    // Moving index through the array
    for (int i = 0; i < length; i++) {
        // Resetting count for each index position
        int count = 0;
        // Finding how many times element appears in array
        for (int j = i; j < length; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        // Remembering most counted element
        if (count > maxcount) {
            maxcount = count;
            element = arr[i];
        }
    }

    return element;

}

int main () {

    int arr[5] = {1,2,2,0,0};
    int length = 5;

    int result = mostFrequent(arr,length);
    cout << result;

}