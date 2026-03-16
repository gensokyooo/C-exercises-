#include <iostream>
using namespace std;
//Problem: Define a function int compact(...) that receives a real-valued array a,
//its length n, and an output array b. The function computes the average of the elements in a, copies into b
//every element of a whose value is strictly greater than that average,
//and returns the number of elements written to b.


int compact ( double const a [], int n, double b[]) {

    // Computing average of "a" elements
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    // We're using double as the values of "a" are real-valued
    double average = sum / n;

    // Copying into b every element of a > average of a
    int count = 0;
    for (int j = 0; j < n; j++) {
        // Adding condition
        if (a[j] > average) {
            b[count++] = a[j];
        }
    }
    // Returning the amount of elements in b
    return count;
}


int main () {

    double const a[5] = {1,-2,3.3,4,5};
    int n = 5;
    double b [5];

    // Calling function
    int result = compact (a,n,b);

    cout << result;
}