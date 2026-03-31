#include <iostream>
using namespace std;

// Max value in an array
/*
    FUNCTION MaxVal (ARRAY x[] OF INTEGER, n: INTEGER) : INTEGER
        DECLARE max: INTEGER
        SET max := x[0]
        FOR i:=1 TO n-1 STEP 1 LOOP
            IF x[i] > max THEN
                SET max := x[i]
            END IF
        END FOR
        RETURN max
    END FUNCTION
*/

int MaxVal(int x[], int n) {
    int max = x[0];
    for (int i = 1; i < n; i++) {
        if (x[i] > max) {
            max = x[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxValue = MaxVal(arr, n);
    cout << "Maximum value in the array: " << maxValue << endl;
    return 0;
}