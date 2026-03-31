#include <iostream>
using namespace std;

// Q1: a=4, b=3
/*
    INTEGER funn (INTEGER a, INTEGER b)
        INTEGER result = 1
        WHILE a > 0 
            IF b MOD 2 EQUAL 1 THEN
                result = result * a
                a = a * a
                b = b / 2
        END WHILE
        RETURN result
    END FUNCTION 
*/
int funn(int a, int b) {
    int result = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            result = result * a;
            a = a * a;
            b = b / 2;
        }
    }
    return result;
}

// Q2: a=3, b=8, c=7
/*
    INTEGER funn (INTEGER a, INTEGER b, INTEGER c)
        IF ((a^8)<8)
            c=a+c
            c=a+c
        END IF
        RETURN a+b+c
    END FUNCTION
*/
int funn(int a, int b, int c) {
    if ((a ^ 8) < 8) {
        c = a + c;
        c = a + c;
    }
    return a + b + c;
}

// Q3: n=127, i=0, s=0
/*
    FUNCTION sample (int n)    
        WHILE(n>0)
            r=n%10
            p=8^i
            s=s+p*r
            i++
            n=n/10
        END WHILE
        RETURN s
    END FUNCTION
*/
int sample(int n) {
    int i = 0, s = 0;
    while (n > 0) {
        int r = n % 10;
        int p = 8 ^ i;
        s = s + p * r;
        i++;
        n = n / 10;
    }
    return s;
}

// Q4: n=42
/*
    FUNCTION CountBits (int n)
        INTEGER count = 0;
        WHILE (n > 0)
            count = count + (n MOD 2);
            n = n/2;
        END WHILE
        RETURN count
    END FUNCTION
*/
int CountBits(int n) {
    int count = 0;
    while (n > 0) {
        count = count + (n % 2);
        n = n / 2;
    }
    return count;
}

// Q8: a=4, b=8, c=57
/*
    INTEGER funn (INTEGER a, INTEGER b, INTEGER c)
        b = (a^11) & b
        FOR each c from 3 to 6
            b = 3 + c
            IF (1<b || (a & c) < (5 - a)) THEN
                a = (c + 2) + c
                b = c + c
                JUMP OUT OF LOOP
            ENDIF
        END FOR
        RETURN a + b
    END FUNCTION
*/
int funn(int a, int b, int c) {
    b = (a ^ 11) & b;
    for (c = 3; c <= 6; c++) {
        b = 3 + c;
        if (1 < b || (a & c) < (5 - a)) {
            a = (c + 2) + c;
            b = c + c;
            break; // JUMP OUT OF LOOP
        }
    }
    return a + b;
}


int main(){
    cout << funn(4, 3) << endl;
    cout << funn(3, 8, 7) << endl;
    cout << CountBits(42) << endl;
    cout << sample(127) << endl;
    return 0;
}