#include <iostream>
using namespace std;

// Example of a namespace
namespace first{
    int value = 100;
}

namespace second{
    int value = 500;
}


int main() {
    //! namespace is a declarative region that provides a scope to the identifiers
    //! inside it. Namespaces are used to organize code into logical groups and to
    //! prevent name collisions that can occur especially when your code base
    //! includes multiple libraries.
    
    // for example, we CANT have two variables with the same name in the same scope

    /*  
        int value = 50;
        int value = 100; // This would cause a COMPIELATION ERROR
        cout << value << endl;          // Outputs: 50
    */ //! i commented this because of (comment in line 35)

    // but we can use namespaces to avoid this issue   
   
    cout << first::value << endl;   // Outputs: 100
    //! if we need to access the variable inside the namespace, we use the scope resolution operator (::) / prefix

    // but u can use the 'using' keyword to bring a namespace or specific members into the current scope
    using namespace second;         //! using
    cout << value << endl;          // this outputs: 50, because local scope has higher precedence
                                    // unless u remove the local variable
    
    return 0;
}