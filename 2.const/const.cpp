#include <iostream>
using namespace std;

int main() { 
    // ! const variable is a variable whose value cannot be changed after initialization
    // its like ( read-only ) variable

    
    // age can be changed but u cant change yearborn, so how to make yearborn
    // cannot be changed?, you can use const keyword
    //! TODAY IS 2026

    const int YEARBORN = 2000;
    int age = 26;
    
    // when you try to change the value of YEARBORN, it will give error

    cout << "I was born in the year: " << YEARBORN << endl;
    cout << "My age is: " << age << endl;

    age = 27;
    cout << "Next year, my age will be: " << age << endl;
}