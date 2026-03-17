#include <iostream>
using namespace std;

int subsequencesTargetSum (int a[], int k, int length) {
// Count all the subsequences that have a sum of k target

    int count = 0;
    for (int i = 0; i < length; i ++) {
        int sum = 0;
        for (int j = i; j < length; j++) {
            sum += a[j];
            if (sum == k) {
                count++;
            }
        }
    }

    return count;

}

int main () {

    int a[] = {0,2,3,4,-2};
    int k = 2;
    int length = 5;

    int result =subsequencesTargetSum (a,k,length);
    cout << result;

}