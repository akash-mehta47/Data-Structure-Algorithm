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

public class DeletionArr {
    public static void main(String[] args) {
        int x[] = {10, 20, 30, 40, 50};
        int n = 5;
        int pos = 2;
        n = deletion(x, n, pos);
        
        for(int i=0; i<n; i++){
            System.out.print(x[i]+" ");
        }
    }
    public static int deletion(int x[], int n, int pos) {
        int value = x[pos];
        for(int i=pos; i<n-1; i++){
            x[i] = x[i+1];
        }
        System.out.println("Deleted value: " + value);
        n = n - 1;
        return n;
    }
}
