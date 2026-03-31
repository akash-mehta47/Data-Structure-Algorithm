#include <iostream>
using namespace std;

// Even and Odd elements in an array
/*
    PROCEDURE EvenOddArrElem (ARRAY x[] OF INTEGER, n: INTEGER)
        DECLARE i: INTEGER
        PRINT "Even elements in the array: "
        FOR i:=0 TO n-1 STEP 1 LOOP
            IF x[i] MOD 2 = 0 THEN
                PRINT x[i]
            END IF
        END FOR
        PRINT "Odd elements in the array: "
        FOR i:=0 TO n-1 STEP 1 LOOP
            IF x[i] MOD 2 <> 0 THEN
                PRINT x[i]
            END IF
        END FOR
    END PROCEDURE
*/

void EvenOddArrElem(int x[], int n) {
    cout << "Even elements in the array: ";
    for (int i = 0; i < n; i++) {
        if (x[i] % 2 == 0) {
            cout << x[i] << " ";
        }
    }
    cout << endl;

    cout << "Odd elements in the array: ";
    for (int i = 0; i < n; i++) {
        if (x[i] % 2 != 0) {
            cout << x[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    EvenOddArrElem(arr, n);
    return 0;
}