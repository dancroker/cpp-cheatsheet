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
//Printing On Console
void PrintOnTerminal() {
    std::cout << "Hello, World!" << std::endl;
}
//cout Is Console Output
//endl Is End Line (/n Can Be Used, But endl Is Better)

//-------------------------------------------------
//Defining Vairables
void DefiningBasicVairableTypes() {
    int number = 10;
    float decimal = 1.5;
    double bigdecimal = 1.12345;
    char letter = 'A';
    bool decision = true;
    std::string word = "Hello World";
}
//char HAS To Use '_' NOT "_" ("_" Is Actually ['_', '/n'], char Only Allows One Elemnet)
//#include Is Almost Required For A String

//-------------------------------------------------
//Math Operations
//Basic Math Operations
void BasicMaths() {
    int addition = 1 + 2;
    int minus = 1 - 2;
    int times = 1 * 2;
    double divide = 1 / 2; //float Can Work Too (~7 Decimal Points), double Is More Precice (~15 Decimal Points)
    int integerdivide = 1 / 2; //Integer Division (No Decimals)
    int modulus = 1 % 2;
}
//Complex Math Operations
#include <cmath>
void AdvancedMaths(){
    double root = sqrt(16); //√16 = 4.0
    double power = pow(2,3); //2³ = 8.0
    int absolute = abs(-10); // = 10
    double floatabsolute = fabs(-3.14); // = 3.14 Can Be Done With float Too
    float rounddown = floor(2.9); // = 2.0
    float roundup = ceil(2.1); // = 3.0
    float roundnormal = round(2.5); // = 3.0
}

//-------------------------------------------------
//Comparison Operations


//-------------------------------------------------
//Main Function Is Whats Run When Program Is Ran
//(All Functions Need To Be Here!)
void main() {
    PrintOnTerminal();
}