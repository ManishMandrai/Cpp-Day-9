// Write a program to find a unique number in an array where all numbers except one, are present thrice,
//{1,3,3,3,4,2,1,1,3,2}
#include <iostream>
using namespace std;

int findUnique(int arr[], int n) {
    int result = 0;

    // Iterate over every bit position (0 to 31 for a 32-bit integer)
    for (int i = 0; i < 32; i++) {
        int sum = 0;
        
        // Count how many numbers have the ith bit set
        for (int j = 0; j < n; j++) {
            if (arr[j] & (1 << i)) {
                sum++;
            }
        }

        // If the sum is not a multiple of 3, the unique number has this bit set
        if (sum % 3 != 0) {
            result |= (1 << i);
        }
    }

    return result;
}

int main() {
    int arr[] = {1, 3, 3, 3, 4, 2, 1, 1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int uniqueNumber = findUnique(arr, n);
    cout << "The unique number is: " << uniqueNumber << endl;

    return 0;
}
