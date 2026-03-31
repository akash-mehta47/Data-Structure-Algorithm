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

public class MaxValArr {
    public static void main(String[] args) {
        int x[] = {10, 20, 30, 40, 50};
        int n = 5;
        int maxValue = maxVal(x, n);
        System.out.println("Maximum value in the array: " + maxValue);
    }
    
    public static int maxVal(int x[], int n) {
        int max = x[0];
        for(int i=1; i<n; i++){
            if(x[i] > max){
                max = x[i];
            }
        }
        return max;
    }    
}
