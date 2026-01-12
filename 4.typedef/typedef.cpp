#include <iostream>

//! typedef is a keyword in C++ that allows you to create an alias for an existing data type.
//! This can be useful for simplifying complex type definitions, improving code readability,

// for example we have string type, i want make it more simple by using typedef
typedef std::string text_t; // now text_t is an alias for std::string
typedef int number_t;   // now number_t is an alias for int

int main() {
    text_t name = "nptnpwr"; // using the alias to declare a string variable
    std::cout << "Hello my name is " << name << std::endl;

    number_t age = 20; // using the alias to declare an integer variable
    std::cout << "I am " << age << " years old." << std::endl;

    // you still can use the original type
    std::string greeting = "Welcome to the world of C++!";
    std::cout << greeting << std::endl;



    //! TYPEDEF IS REPLACED BY 'using' KEYWORD IN MODERN C++ (C++11 AND LATER)
    //! ITS MORE FLEXIBLE AND EASIER TO READ, SO ITS RECOMMENDED TO USE 'using' INSTEAD OF 'typedef'

    using decimal_t = double; // now decimal_t is an alias for double
    decimal_t price = 19.99; // using the alias to declare a double variable

    std::cout << "\nusing 'using' keyword:" << std::endl;
    std::cout << "The price is $" << price << std::endl;

    return 0;

    //! the difference between typedef and using is mostly syntactical, but 'using' can handle more complex scenarios,
    //! such as template aliases, which typedef cannot.
    //! and typedef u need to write the alias after the type, while using you write the alias before the type.
}