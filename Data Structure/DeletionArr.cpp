#include <iostream>
using namespace std;

// Deletion in an array
/*
    FUNCTION Deletion (ARRAY x[] : INTEGER, INTEGER n, INTEGER pos) : INTEGER
        DECLARE value : INTEGER
        DECLARE i: INTEGER
        SET i := n 
        WHILE (pos<=n) LOOP
            a[pos] := a[pos+1]
            pos := pos + 1
        END WHILE
        PRINT "Deleted value: ", value
        n := n - 1
        RETURN n
    END FUNCTION
*/
int Deletion(int x[], int n, int pos) {
    int value = x[pos - 1]; // Adjusting for 0-based index
    for (int i = pos - 1; i < n - 1; i++) {
        x[i] = x[i + 1];
    }
    cout << "Deleted value: " << value << endl;
    return n - 1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pos = 3; // Position to delete (1-based index)

    n = Deletion(arr, n, pos);

    // Print the array after deletion
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}