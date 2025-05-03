#include<iostream>                  //Line 1
                                    //Line 2
int main(void) {                    //Line 3
    std::cout << "Hello World!\n";  //Line 4
    return 0;                       //Line 5
}                                   //Line 6

//ref
//https://cplusplus.com/doc/tutorial/program_structure/
//https://en.cppreference.com/w/cpp/language/main_function

/*

Line 1:
This line instruct the preprocessor to include C++ library code known as iostream (Input Output STREAM).
iostream lib allows you to perform standard input output operations.
This line is special line handled before the compilation of the program itself.
Lines starting with '#' are directives for the preprocessor.
For now just remember that if you intend to perform some standard input/ouput operation lets add to your program the ligne:
#include <iostream>

Line 2:
This is just a blank line. it doesn't have any effect on the program. it has been added just for readability
Il allow a separation of the sections of the program. Here we have 2 sections so far
Section 1: Preprocessor directive
Section 2: main function

Line 3:
    line 3 part 1: int main(void)
    line 3 part 2: {
    Line 3 part 3: }  is also Line 6
'int main() {}' is the decration of a function named 'main'. It has a return type of 'int'. it doesn't take any parameter and has an empty body.
'int' = return type
'main' = function name. This is the entry point of Every Cpp program
'()' = reserved for function parameter
'{}' = body of the function. Line 4 and 5 in the in the exemple above are part of the function main body.
The same way the parameters will be between the parentesis, the body of the function will be between cruly-braces.
Within a block the instructions are executed sequentially.
We will be keeping 'int main() {}' or 'int main(void) {}' for now 

Line 4:
The instruction to print out the message "Hello World!\n" to the screen.
The instruction is performed by calling 'std::cout'
It is a C++ statement. The instruction/statement in c++ ends with a ';' character
'\n' is a special character requesting the cursor to point on a new line. In other word it is a carriage return or new line request character. 


Line 5:
the istruction is the return instruction.
For main function this statement could be omitted and the code will still compile.

Line 6:
End of the main function block.

For now the sctructure of the C++ program will be like on the example below
#include<iostream>                  //Line 1
                                    //Line 2
int main(void) {                    //Line 3
                                    //Line 4
    return 0;                       //Line 5
}                                   //Line 6

Line 4 will be from where we will be adding the statements/instructions
It is highly recommanded for the instruction to use indentation (4 spaces) as it help read the code and show the subsection.

*/
