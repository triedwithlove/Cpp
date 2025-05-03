#include<iostream>

// 3 differents ways to print out the same result.
int main(void) {
    std::cout << "C++ is a great" << "\n" << "programming language";
    std::cout << "\n";  //new line
    std::cout << "I cherish the oppportunity\nto learn it";
    std::cout << "\n";  //new line
    std::cout << "Thank you! ";
    std::cout << "\nBest regards\n";
    return 0;
}
