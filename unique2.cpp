#include <iostream>
using namespace std;

int setBit(int n, int pos) {
    return ((n & (1 << pos)) != 0);
}

void unique(int arr[], int n) {
    int xorsum = 0;
    for (int i = 0; i < n; i++) {
        xorsum = xorsum ^ arr[i];
    }

    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;

    // Find the rightmost set bit position
    while ((xorsum & 1) == 0) {
        pos++;
        xorsum = xorsum >> 1;
    }

    int newxor = 0;
    for (int i = 0; i < n; i++) {
        if (setBit(arr[i], pos)) {
            newxor = newxor ^ arr[i];
        }
    }

    cout << "The two unique numbers are: " << newxor << " and " << (tempxor ^ newxor) << endl;
}

int main() {
    int arr[] = {2, 4, 6, 7, 5, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    unique(arr, n);

    return 0;
}
