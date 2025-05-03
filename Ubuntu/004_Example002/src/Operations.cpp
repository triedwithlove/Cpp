#include<iostream>
using namespace std;

int main(void) {
    cout << "C++ is a powerful programming language" << "\n";

//operation
    cout << "\nOperations:" << "\n";

    cout << "(Whole) Multiplication: " << 25 * 5 << "\n";
    cout << "(Double) Multiplication: " << 25.3 * 5 << "\n";
    cout << "Modulo: " << 22 % 5 << "\n";
    cout << "(whole) Division: " << -125 / 4 << "\n";
    cout << "(double) Division: " << -125.0 / 4 << "\n";
    cout << "(double) Division: " << 25.7 / 3.0 << "\n";

    cout << "Addition: " << 400.16 + 25 << "\n";
    cout << "Substraction: " << 208.16 - 25 << "\n";
    cout << "Boolean negation of true: " << !true << "\n";
    
    return 0;
}

//Result
/*
C++ is a powerful programming language

Operations:
(Whole) Multiplication: 125
(Double) Multiplication: 126.5
Modulo: 2
(whole) Division: -31
(double) Division: -31.25
(double) Division: 8.56667
Addition: 425.16
Substraction: 183.16
Boolean negation of true: 0
[1] + Done                       "/usr/bin/gdb" --interpreter=mi --tty=${DbgTerm} 0<"/tmp/Microsoft-MIEngine-In-cakvx4cm.lxg" 1>"/tmp/Microsoft-MIEngine-Out-jcxzzfxv.1za"
*/
