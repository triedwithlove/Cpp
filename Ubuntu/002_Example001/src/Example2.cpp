#include<iostream>


// 3 differents ways to print out the same result.
int main(void) {
    std::cout << "Hello World! " << "\n" << "A C++ Program I am." << "\n";
    std::cout << "\n";  //new line
    std::cout << "Hello World! \nA C++ Program I am.\n";
    std::cout << "\n";  //new line
    std::cout << "Hello World! ";
    std::cout << "\nA C++ Program I am.\n";
    return 0;
}
