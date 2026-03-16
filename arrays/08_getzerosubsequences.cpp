#include <iostream>
using namespace std;

//Problem: Write a function getZeroSubsequences that takes as parameters an
//array of integers and its length, and returns the number of subsequences
//in the array whose sum is equal to zero.
//For example, if the input array is:
// 2 3 -2 1 -2 5
//the function should return 1.

int getZeroSubsequences (int arr[], int length) {


  int count = 0;
    for (int i = 0; i < length; i ++ ) {
        int sum = 0;
        // Extending subsequences from index i to the end
        for (int j = i; j < length; j++) {
            sum+= arr[j];
            if (sum == 0) {
                count++;
            }
        }
    }
    return count;
}

int main () {

    int arr[5] = {1,-1,3,4,5};
    int length = 5;

    int result = getZeroSubsequences(arr,length);
    cout << result;
}