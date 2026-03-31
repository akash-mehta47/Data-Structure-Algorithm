#include <iostream>

using namespace std;

// Q1: ---------------------------------
void solveQuestion1() {
    /*
        INTEGER p,q,r
        SET p:= 1, q:= 5, r:= 7
        r = q+p

        if((3+p)<(q+3))
                if((r+q+8)<(q+p+r))
                      r = (3+30)r
                endif
                r = (q + 1) + q

        ELSE
            if((r+q)<(q+r))
                q = 12 + q
            else 
                r = q + p 
            endif
            r = (p+q)+r
        ENDIF
        r = r+r
        print p+q+r
    */
    int p = 1, q = 5, r = 7;
    r = q + p;

    if ((3 + p) < (q + 3)) {
        if ((r + q + 8) < (q + p + r)) {
            r = (3 + 30) * r;
        }
        r = (q + 1) + q;
    } else {
        if ((r + q) < (q + r)) {
            q = 12 + q;
        } else {
            r = q + p;
        }
        r = (p + q) + r;
    }
    r = r + r;
    cout << "Q1 Result: " << (p + q + r) << endl;
}

// Q2: ---------------------------------
void solveQuestion2() {
    /*
        INTEGER a,b,c
        SET a:= 1, b:= 5, c:= 7
        if((c+b)<(a+c))
             b = a+b
        else 
            if((c+9+b)<(6+c))
                 c = (3+8)+c
            endif
        endif 
        
        print a+b+c
    */
    int a = 1, b = 5, c = 7;
    if ((c + b) < (a + c)) {
        b = a + b;
    } else {
        if ((c + 9 + b) < (6 + c)) {
            c = (3 + 8) + c;
        }
    }
    cout << "Q2 Result: " << (a + b + c) << endl;
}

// Q3: -------------
void solveQuestion3() {
    /* INETGER p,q,r
        SET p:= 4, q:= 2, r:= 8
        for(each r from 5 to 6)
            p = (r+r) ^ r
            q = (8+3)+p
        end for
        for(each r from 5 to 8)
            p = 4+r
            p = 1 + q
        end for
        print p+q+r
    */
    int p1 = 4, q1 = 2, r1 = 8;
    for (r1 = 5; r1 <= 6; r1++) {
        p1 = (r1 + r1) ^ r1;
        q1 = (8 + 3) + p1;
    }
    for (r1 = 5; r1 <= 8; r1++) {
        p1 = 4 + r1;
        p1 = 1 + q1;
    }
    cout << "Q3 Result: " << (p1 + q1 + r1) << endl;
}

// Q4: -----------------------------
void solveQuestion4() {
    /* INTEGER a,b,c
        SET b:= 4, c:= 5
        for each a from 2 to 4 loop
            print c 
            b:=b-1
            c:=c+b
        next for        
    */
    int a2, b2 = 4, c2 = 5;
    cout << "Q4 sequence: ";
    for (a2 = 2; a2 <= 4; a2++) {
        cout << c2 << " ";
        b2 = b2 - 1;
        c2 = c2 + b2;
    }
    cout << endl;
}

// Q5: -----------------------------
void solveQuestion5() {
    /* INTEGER a,b,c
        SET a:= 4, b:= 4, c:= 4
        if(a & ( b ^ b ) & c ))
            a = a >> 1
        End if
        print a + b + c      
    */
    int a2 = 4, b2 = 4, c3 = 4;
    cout << "Q5 sequence: ";
    if (a2 & (b2 ^ b2) & c3) {
        a2 = a2 >> 1;
    }
    cout << (a2 + b2 + c3) << endl;
}

// Q6: -----------------------------
void solveQuestion6() {
    /* INTEGER x
        SET x:= 259
        IF x EQUAL 0 THEN
            PRINT "0"
        ELSE
            IF x MOD 9 EQUAL 0 THEN
                PRINT "9"
            ELSE
                PRINT x MOD 9
            ENDIF
        ENDIF
    */
    int x = 259;
    cout << "Q6 sequence: ";
    if (x == 0) {
        cout << "0" << endl;
    } else {
        if (x % 9 == 0) {
            cout << "9" << endl;
        } else {
            cout << (x % 9) << endl;
        }
    }
}

// Q7: -----------------------------
void solveQuestion7() {
    /* INTEGER p, q, r
        SET p:= 5, q:= 2, r:= 5
        FOR each p from 5 to 6 
            p = ( r + 7 ) + r
            IF ((r+q) > (q-r) || 8<q) THEN
                q = (p+r) + q
                CONTINUE
            ENDIF
        END FOR
        PRINT p+q
    */
    int p3 = 5, q3 = 2, r3 = 5;
    for (p3 = 5; p3 <= 6; p3++) {
        p3 = (r3 + 7) + r3;
        if ((r3 + q3) > (q3 - r3) || 8 < q3) {
            q3 = (p3 + r3) + q3;
            continue;
        }
    }
    cout << "Q7 Result: " << (p3 + q3) << endl;
}

// Q8: -----------------------------
void solveQuestion8() {
    /* INTEGER a, b, c
        SET a:=7, b:= 6, c:= 5
        b := a + b
        IF ((b+c) < (c-b) && 2<a) THEN
            c := 11 + a
        ENDIF
        c := (b+a) + a
        IF ((a&9) < b) THEN
            b := (a & a) + c
        ENDIF
        PRINT a + b + c
    */
    int a3 = 7, b3 = 6, c4 = 5;
    b3 = a3 + b3;
    if ((b3 + c4) < (c4 - b3) && 2 < a3) {
        c4 = 11 + a3;
    }
    c4 = (b3 + a3) + a3;
    if ((a3 & 9) < b3) {
        b3 = (a3 & a3) + c4;
    }
    cout << "Q8 Result: " << (a3 + b3 + c4) << endl;
}

// Q9: -----------------------------
void solveQuestion9() {
    /* INTEGER a, b, c
        SET b:= 0, c:= 0
        FOR each a from 1 to 5 
            PRINT c
            b := b + 1 
            c := c + b
        NEXT a
    */
    int a4 = 0, b4 = 0, c4 = 0;
    for (a4 = 1; a4 <= 5; a4++) {
        cout << c4 << " ";
        b4 = b4 + 1;
        c4 = c4 + b4;
    }
    cout << endl;
}

int main() {
    solveQuestion1();
    solveQuestion2();
    solveQuestion3();
    solveQuestion4();
    solveQuestion5();
    solveQuestion6();
    solveQuestion7();
    solveQuestion8();
    solveQuestion9();
    return 0;
}