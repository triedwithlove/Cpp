#include<iostream>
using namespace std;

int main(void) {
    cout << "I love C++ programming language\n";
    return 0;
}

//Ref
//https://cplusplus.com/doc/tutorial/program_structure/
//https://www.geeksforgeeks.org/namespace-in-c/


/*
"Namespace is a feature that provides a way to group related identifiers such as variables, functions, and classes under a single name.
It provides the space where we can define or declare identifier i.e. variable, method, classes. In essence, a namespace defines a scope."
from Geeks for geeks

In this case the the  namespace is 'std' for the standard library.
'cout' is part of the standard library

it is possible to use 2 ways 
- the ways that we knew since the begining 'std::cout << "Hello World!"'
- the way in this file 'using namespace std;' in the preprocessor declaration section and then inside the main callint 'cout' without std prefix

namespace are a solution for name conflicts. 
If a program include some libraries having for some reason the same name for variables, functions, or classes, the ways to diferentiate is by using namespace
like 'std::cout'

//---------------- Case 1
#include<iostream>

int main(void) {
    std::cout << "I love C++ programming language\n";
    return 0;
}

//---------------- Case 2
#include<iostream>
using namespace std;

int main(void) {
    cout << "I love C++ programming language\n";
    return 0;
}

*/