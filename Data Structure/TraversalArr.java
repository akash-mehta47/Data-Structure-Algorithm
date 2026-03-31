// Traversal of an array
/*
    PROCEDURE Traversal (ARRAY x[] OF INTEGER, n: INTEGER)
        FOR i:=0 TO n-1 DO
            PRINT x[i]
        END FOR
    END PROCEDURE    
*/

public class TraversalArr {
    public static void main(String[] args){
        int x[] = {10,20,30,40,50};
        traversal(x,5); 
    }
    static void traversal(int x[], int n){
        for(int i=0; i<n; i++){
            System.out.print(x[i]+" ");
        }
    }
}