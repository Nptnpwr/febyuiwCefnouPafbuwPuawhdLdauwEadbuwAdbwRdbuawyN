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


    //! parentheses can be used to group operations and change the order of evaluation
    // for example, in the expression 2 + 3 * 4, multiplication is performed first,
    // resulting in 2 + 12 = 14. However, if we use parentheses like this: (2 + 3) * 4,
    // the addition is performed first, resulting in 5 * 4 = 20.

    int coin = 10 - 2 * 4 / 2 + 6; 
    std::cout << "\nWithout Parentheses: " << coin << std::endl;  // the output will be 14
    /* 
        !because the operations are performed in the following order:
        a. 2 * 4 = 8
        b. 8 / 2 = 4 (integer division)
        c. 10 - 4 = 6
        d. 8 + 6 = 14
    */

    int money = (10 - 2) * (4 / 2 + 6);
    std::cout << "With Parentheses: " << money << std::endl;  // the output will be 48
    /*
        !because the operations are performed in the following order:
        a. (10 - 2) = 8
        b. (4 / 2 + 6) = (2 + 6) = 8
        c. 8 * 8 = 64
    */

    return 0;
}