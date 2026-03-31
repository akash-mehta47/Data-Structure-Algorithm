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

public class InsertionArr {
    public static void main(String[] args) {
        int x[] = new int[10];
        x[0] = 10;
        x[1] = 20;
        x[2] = 30;
        x[3] = 40;
        x[4] = 50;
        int n = 5; // current number of elements
        int pos = 2; // position to insert (0-based index)
        int val = 25; // value to insert
        n = insertion(x, n, pos, val);
        
        // Print the array after insertion
        for(int i=0; i<n; i++){
            System.out.print(x[i]+" ");
        }
    }    

    static int insertion(int x[], int n, int pos, int val){
        int i = n;
        while(i >= pos){
            x[i] = x[i-1]; // shift elements to the right
            i = i - 1;
        }
        x[pos] = val; // insert the new value
        n = n + 1; // increment the count of elements
        return n; // return the new count
    }
}
