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
//Maths Operations That Apply A Calcuation To ONE Vairable Without Needed To Repeat It
void OneVariableMaths(){
    int i = 0;
    i += 1;    // i = i + 1
    i -= 1;    // i = i - 1
    i *= 2;    // i = i * 2
    i /= 2;    // i = i / 2
    i %= 2;    // i = i % 2 (remainder after division)
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
void Comparisons(){
    std::string Equal = "a == b";
    std::string NotEqual = "a != b";
    std::string GreaterThan = "a > b";
    std::string LessThan = "a < b";
    std::string GreaterOrEqualThan = "a >= b";
    std::string LessOrEqualThan = "a <= b";
}
//Stored As Strings Just For Display!

//-------------------------------------------------
//Logical Operations
void Logic(){
    std::string And = "true && false";
    std::string Or = "true || false";
    std::string Not = "!true";
}
//Stored As Strings Just For Display!
//true And false Can Be Replaced With Statements

//-------------------------------------------------
//If Statements
void IfStatement(){
    if (1 > 10) {
        std::cout << "If True" <<std::endl;
    } 
    else if (2 > 10) {
        std::cout << "Else If True" <<std::endl; 
    } else {
        std::cout << "If False" <<std::endl;
    }
}
//Simmilar Style To Python If
//elif Is Not Valid, else if Is Required
//else Statements Can be Put On a New Line Or Directly After A }

//-------------------------------------------------
//For Loop
//for (initialisation; condition; update)
//; Has To Be Between Each Entry
void ForLoop(){
    for (int i = 0; i < 5; i++){
        std::cout << i <<std::endl; 
    }
}
//int i = 0 This Happens Once At The Start
//i < 5 This Is The Condition That Needs To Be Met To Stop The Loop
//i++ This Is Ran At The End Of Each Loop (Use Increment / Decrement Operators)
void InfinateForLoop(){
    for (;;) {
        std::cout << "Forever!" <<std::endl;
    }
}
//With No Condition, The For Loop Is Always true, So It Loops Forever

//-------------------------------------------------
//Increment / Decrement Operators

//Post Incremenets Have Operators On The Right Side Of The Value
//This Will Use The Current Value, Then Apply The Calcualtion
void PostIncrement(){
    int i = 1;
    i++;
    //i == 2
    int i = 1;
    i--;
    //i == 0
    int i = 5;
    int x = i++;  
    // x = 5, i = 6 (use THEN increase)
}

//Pre Incremenets Have Operators On The Left Side Of The Value
//This Will Apply The Calcualtion, Then Use The Value 
void PreIncrement(){
    int i = 1;
    ++i;
    //i == 2
    int i = 1;
    --i;
    //i == 0
    int i = 5;
    int x = ++i;
    // y = 6, i = 6 (increase THEN use)
}

//-------------------------------------------------
//While Loops
void StandardWhileLoop(){
    int i = 0;
    while (i < 5){
        std::cout << i <<std::endl; 
        i++;
    }
}

//do Will Run The Code, Then Check The Condition, Rather Than Checking First
void DoWhileLoop(){
    int x = 10;
    do{
        std::cout << "Hello!" << std::endl;
    } while (x < 5); //This Condition Will Return False
    //Even So, Hello! Will Be Outputed
}
//-------------------------------------------------
//Main Function Is Whats Run When Program Is Ran
//(All Functions Need To Be Here!)
void main() {
    PrintOnTerminal();
}