#include<iostream>

int main(void) {
    std::cout << "*** Example 1 ***\n";
    std::cout << "-----------------\n";
    std::cout << "Hello World! " << "A C++ Program I am.";

    std::cout << "\n\n";
    std::cout << "*** Example 2 ***\n";
    // 3 differents ways to print out the same result.
    std::cout << "-----------------\n";
    std::cout << "Hello World! " << "\n" << "A C++ Program I am." << "\n";
    std::cout << "\n";  //new line
    std::cout << "Hello World! \nA C++ Program I am.\n";
    std::cout << "\n";  //new line
    std::cout << "Hello World! ";
    std::cout << "\nA C++ Program I am.\n";

    std::cout << "\n\n";
    std::cout << "*** Example 3 ***\n";
    std::cout << "-----------------\n";
    std::cout << "C++ is a great" << "\n" << "programming language";
    std::cout << "\n";  //new line
    std::cout << "I cherish the oppportunity\nto learn it";
    std::cout << "\n";  //new line
    std::cout << "Thank you! ";
    std::cout << "\nBest regards\n";

    std::cout << "\n\n";
    std::cout << "*** Example 4 ***\n";
    std::cout << "-----------------\n";
    std::cout << "\n*----------+----------*";
    std::cout << "\n";  //new line
    std::cout << "\n*                     *";
    std::cout << "\n";  //new line

    return 0;
}

