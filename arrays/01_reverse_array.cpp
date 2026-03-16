#include <iostream>
using namespace std;


void reverse (int arr[], int length) {

    // Invert the order of the array elements
    // We're gonna be using a for loop that iterates until half the length
    // Our program will swap the elements in a symmetric manner

    for (int i = 0; i < length/2; i++) {
        // Saving the current element
        int temp = arr[i];
        // Assigning the new value
        arr[i] = arr[length-1-i];
        // Swapping
        arr[length-1-i] = temp;
    }

}

int main () {

int arr [5] = {1,2,3,4,5};
    int length = sizeof(arr) / sizeof (arr[0]);

    // Calling the function
    reverse (arr,length);

    // Printing the new array
    for (int i = 0; i < length; i++) {
        cout << arr[i];
    }


}