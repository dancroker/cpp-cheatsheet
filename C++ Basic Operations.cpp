//To Start Coding:
//1. Open Developer Command Prompt
//2. Type "code"

//-------------------------------------------------
//#include Is A Preprocessor Directive
//It Tells Compiler To Get Contents Of Another File Before Compiling
//Like A Python import Operation
#include <iostream>

//-------------------------------------------------
// Scope Resolution Operator
//(__ :: __)
//Tells Compiler To Look Inside This Namespace/Class/Struct For Specified Something
//std::string (Look In Standard Libary For "string")
//To Assume Everything Is std:: (Or Any __:: Unless Specified), Use The Following...
//using namespace ___; std In sid:: Case

//-------------------------------------------------
//Function Return Types
//(What The Function Is Expected / Needs To Return)
//Every Function Needs To Have This!

//1.Returns Nothing
void VoidReturningFunction();

//2.Returns Intetger 
int IntReturningFunction();

//3.Returns Float
float FloatReturningFunction();

//4.Returns Double
double DoubleReturningFunction();

//5.Returns Character (Single!)
char CharReturningFunction();

//6.Returns Boolean (true/false)
bool BooleanReturningFunction();

//7.Returns String
#include <string>
std::string StringReturningFunction();
//#include Is Required For A Function Returning A String
//Best To Always #include <string>, 98% Of String Operations Require It


//-------------------------------------------------
//Function To Print
void PrintOnTerminal() {
    std::cout << "Hello, World!" << std::endl;
}

//-------------------------------------------------
//Main Function Is Whats Run When Program Is Ran
//(All Functions Need To Be Here!)
void main() {
    PrintOnTerminal();
}