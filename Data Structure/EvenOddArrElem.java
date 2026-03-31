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

public class EvenOddArrElem {
    public static void main(String[] args) {
        int x[] = {1, 2, 3, 4, 5, 6};
        int n = 6;
        evenOddArrElem(x, n);
    }

    public static void evenOddArrElem(int x[], int n) {
        System.out.print("Even elements in the array: ");
        for (int i = 0; i < n; i++) {
            if (x[i] % 2 == 0) {
                System.out.print(x[i] + " ");
            }
        }
        System.out.println();

        System.out.print("Odd elements in the array: ");
        for (int i = 0; i < n; i++) {
            if (x[i] % 2 != 0) {
                System.out.print(x[i] + " ");
            }
        }
        System.out.println();
    }
}
