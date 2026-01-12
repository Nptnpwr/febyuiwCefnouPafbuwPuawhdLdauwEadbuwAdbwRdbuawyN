#include <iostream>

//! arithmatic operators is used to perform basic mathematical operations
//! such as addition, subtraction, multiplication, division, and modulus.
//! ( + , - , * , / , % )

int main() {
    int coinAdd = 50;
    int coinSub = 50;
    int coinMul = 50;
    int coinDiv = 100;

    // addition
    coinAdd = coinAdd + 1; // coinAdd is now 51 - basic addition
    coinAdd += 1;    // coinAdd is now 52 - shorthand addition
    coinAdd++;        // coinAdd is now 53 - increment operator (its only adds 1)
    std::cout << "After Addition: " << coinAdd << std::endl;

    // subtraction
    coinSub = coinSub - 1; // coinSub is now 49 - basic subtraction
    coinSub -= 1;    // coinSub is now 48 - shorthand subtraction
    coinSub--;        // coinSub is now 47 - decrement operator (its only subtracts 1)
    std::cout << "After Subtraction: " << coinSub << std::endl;

    // multiplication
    coinMul = coinMul * 2; // coinMul is now 100 - basic multiplication
    coinMul *= 2;    // coinMul is now 200 - shorthand multiplication
    std::cout << "After Multiplication: " << coinMul << std::endl;

    // division
    coinDiv = coinDiv / 2; // coinDiv is now 50 - basic division
    coinDiv /= 2;    // coinDiv is now 25 - shorthand division
    std::cout << "After Division: " << coinDiv << std::endl;
    

    // modulus
    //! modulus operator returns the remainder of a division operation 
    //! for example, 5 % 2 would return 1 because when 5 is divided by 2,
    //! the quotient is 2 and the remainder is 1. ( 5 = 2 * 2 + 1 )

    int modulus = 10;
    modulus = modulus % 3; // modulus is now 1
    // because 10 divided by 3 is 3 with a remainder of 1
    std::cout << "After Modulus: " << modulus << std::endl;

    return 0;
}