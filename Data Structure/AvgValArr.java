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

public class AvgValArr {
    public static void main(String[] args) {
        int x[] = {10, 20, 30, 40, 50};
        int n = 5;
        double averageValue = avgVal(x, n);
        System.out.println("Average value in the array: " + averageValue);
    }
    
    public static double avgVal(int x[], int n) {
        double sum = 0;
        for(int i=0; i<n; i++){
            sum += x[i];
        }
        return sum / n;
    }

}
