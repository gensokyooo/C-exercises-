#include <iostream>
using namespace std;

// Problem: Write a function named coincide that takes as parameters two integer arrays a1 and a2,
// along with their respective sizes d1 and d2. The function must determine and return the number of elements that
// coincide in a1 and a2.
// Two elements e1 from a1 and e2 from a2 are said to coincide if they have the same index and the same value.

int coincide (int a1 [], int a2[], int d1, int d2) {

    // Using a for loop to compare elements of a1 with elements of a2
    int count = 0;
    for (int i = 0; i < d1 && i < d2; i++) {
        if (a1[i] == a2[i]) {
            // Counting matches
            count++;
        }

    }

    return count;

}

int main () {

    int a1 [5] = {1,2,3,5,5};
    int a2 [5] = {2,3,3,5,6};
    int d1 = 5;
    int d2 = 5;

    int result = coincide (a1,a2,d1,d2);
    cout << result;

}