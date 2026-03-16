#include <iostream>
using namespace std;
//Problem: Write a void function named swap that takes as parameters two integer arrays a and b,
//and an integer n representing their common size. The function must swap the
//elements of a and b that have the same index whenever the element
//in a is greater than the corresponding element in b.

void swap (int a[], int b[], int length) {

    // Swapping elements with same index if condition is met
    for (int i = 0; i < length; i++) {
        if (a[i] > b[i]) {
            int temp = a[i];
            a[i] = b[i];
            b[i] = temp;
        }
    }
}

int main () {
    int a [5] = {1,2,3,4,5};
    int b [5] = {0,1,3,5,2};
    int length = 5;

    swap (a,b,length);

    // Printing the arrays

    cout << "Array A:" << endl;
    for (int i = 0; i < length; i ++) {
        cout << a[i];
    }

    cout << endl;

        cout << "Array B:" << endl;
        for (int i = 0; i < length; i ++) {
            cout << b[i];
        }
}
