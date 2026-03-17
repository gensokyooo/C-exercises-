#include <iostream>
using namespace std;

void rotate (int a[], int length) {

    int lastvalue = a[length-1];
    for ( int i = length-1; i > 0; i--) {
        a[i] = a[i-1];
    }
    a[0] = lastvalue;
}

int main () {

    int a [] = {1,2,3,4,5};
    int length = 5;
    rotate(a,length);
    for (int i = 0; i < length; i++) {
        cout << a[i];
    }
}