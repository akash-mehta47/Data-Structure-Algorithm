#include <iostream>
using namespace std;

// Insertion in an array
/*
    INTEGER FUNCTION Insertion (ARRAY x[] OF INTEGER, n: INTEGER, pos: INTEGER, val: INTEGER)
        DECLARE i: INTEGER
        SET i := n
        WHILE i >= pos LOOP
            x[i] := x[i-1]
            i := i - 1
        END LOOP
        x[pos] := val
        n:= n + 1
        RETURN n
    END FUNCTION
*/

int Insertion(int x[], int n, int pos, int val) {
    for (int i = n; i >= pos; i--) {
        x[i] = x[i - 1];
    }
    x[pos] = val; // Adjusting for 0-based index
    return n + 1;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5}; // Assuming a maximum size of 100
    int n = 5; // Current number of elements in the array
    int pos = 3; // Position to insert (1-based index)
    int val = 10; // Value to insert

    n = Insertion(arr, n, pos, val);

    // Print the array after insertion
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}