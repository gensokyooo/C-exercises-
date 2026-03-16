#include <iostream>
using namespace std;
// Problem: Write a function named noRepetitions that returns an int.
// The function takes as parameters an array of integers a, the number n of
// elements in a and another integer array b.
//The function must store in array b the elements of a without repetitions.
//If an element appears more than once, it should be stored only the first time it appears.
// The function must return the number of unique elements from a.

int noRepetitions (int a[], int n, int b[]) {

    int count = 0;
    for (int i = 0; i < n; i++) {
        // Resetting flag for each index
        bool flag = false;

        for (int j = 0; j < count; j++) {
            if (a[i] == b[j]) {
                flag = true;
                break;
            }
        }
        // Adding element if above condition isn't triggered
        if (!flag) {
            b[count++] = a[i];
        }
    }

    return count;

}

int main () {

    int a[5] = {1,2,2,6,5};
    int n = 5;
    int b [5];

    int result = noRepetitions (a,n,b);
    cout << result;


}