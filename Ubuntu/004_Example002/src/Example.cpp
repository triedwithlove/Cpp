#include<iostream>
using namespace std;

int main(void) {
    cout << "C++ is a powerful programming language" << "\n";

    cout << 25  << "\n";        // a whole number
    cout << 400.16 << "\n";     // a decimal number
    cout << true << "\n";       // a boolean
    cout << 'C' << "\n";        // a character

//operation
    cout << "\nOperations:" << "\n";

//cout << "C++ is a powerful " + "programming language" << "\n";
/*error: invalid operands of types ‘const char [20]’ and ‘const char [21]’ to binary ‘operator+’
   15 | cout << "C++ is a powerful " + "programming language" << "\n";
      |         ~~~~~~~~~~~~~~~~~~~~~ ^ ~~~~~~~~~~~~~~~~~~~~~~
      |         |                       |
      |         const char [20]         const char [21]
*/

    cout << 25 * 5 << "\n";
    cout << 25 % 3 << "\n";
    cout << -125 / 4 << "\n";
    cout << -125.0 / 4 << "\n";
    cout << 25.7 / 3 << "\n";

    cout << 400.16 + 25 << "\n";
    cout << !true << "\n";          //negation of true.
    
    return 0;
}

//Result
/*
C++ is a powerful programming language
25
400.16
1
C

Operations:
125
1
-31
-31.25
8.56667
425.16
0
[1] + Done                       "/usr/bin/gdb" --interpreter=mi --tty=${DbgTerm} 0<"/tmp/Microsoft-MIEngine-In-dh5uld0e.vgb" 1>"/tmp/Microsoft-MIEngine-Out-ogb50evu.miw"
*/
