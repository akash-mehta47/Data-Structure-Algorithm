#include <iostream>
using namespace std;

// Average value in an array
/*
    FUNCTION AvgVal (ARRAY x[] OF INTEGER, n: INTEGER) : REAL
        DECLARE sum: REAL
        DECLARE avg: REAL
        SET sum := 0
        FOR i:=0 TO n-1 STEP 1 LOOP
            SET sum := sum + x[i]
        END FOR
        SET avg := sum / n
        RETURN avg
    END FUNCTION
*/
double AvgVal(int x[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += x[i];
    }
    return sum / n;
}   

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    double average = AvgVal(arr, n);
    cout << "Average value in the array: " << average << endl;
    return 0;
}