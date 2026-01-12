#include <iostream>
using namespace std;

int main() {
    
    // ! Variable declaration and assignment

    // ! integer variable ( whole number )
    int x; // declaration variable x
    x = 10;  // and assignment value 10 to x

    int y = 20; // dceclaration and assignment in one line
    int sum = x + y; // sum of x and y

    cout << "interger variables output:" << endl;
    cout << "value of x: " << x << endl; // output value of x
    cout << "value of y: " << y << endl; // output value of y
    cout << "sum of x and y: " << sum << endl; // output sum


    // ! Decimal variable ( float and double - float = 32bit, double = 64bit)

    // maximum double value is 1.7E+308 or 1.7 x 10^308 or //! 17 followed by 307 zeros
    // and maximum float value is 3.4E+38 or 3.4 x 10^38 or //! 34 followed by 37 zeros

    double a = 5.5; // declaration and assignment of double variable a
    float b = 3.3; // declaration and assignment of float variable b
    double total = a + b; // sum of a and b

    cout << "\ndecimal variables output:" << endl;
    cout << "total of a and b: " << total << endl; // output total

    // ! Character variable ( single character enclosed in single quotes )
    char grade = 'A'; // declaration and assignment of char variable grade
    char symbol = '@'; // declaration and assignment of char variable symbol

    cout << "\ncharacter variables output:" << endl;
    cout << "value of grade: " << grade << endl; // output value of grade
    cout << "value of symbol: " << symbol << endl; // output value of symbol


    // ! Boolean variable ( true or false )
    bool available = true; // declaration and assignment of bool variable available
    bool allowed = false; // declaration and assignment of bool variable allowed


    // ! String variable ( sequence of characters enclosed in double quotes "")
    string name = "nptnpwr"; // declaration and assignment of string variable name
    string message = "Hello, World!"; // declaration and assignment of string variable message

    // you can also use number and special characters in string
    string address = "1234 Main St."; // declaration and assignment of string variable address

    cout << "\nthis is my name: " << name << endl; // output value of name
    cout << message << endl; // output value of message
    cout << "\nthis is my address: " << address << " please come in" << endl; // output value of address




















    return 0;
}