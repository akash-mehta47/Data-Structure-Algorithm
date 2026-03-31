#include <iostream>
using namespace std;
// Traversal of an array
/*
    PROCEDURE Traversal (ARRAY x[] OF INTEGER, n: INTEGER)
        FOR i:=0 TO n-1 DO
            PRINT x[i]
        END FOR
    END PROCEDURE    
*/
void Traversal(int x[], int n) {
    for (int i = 0; i < n; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Traversal(arr, n);
    return 0;
}