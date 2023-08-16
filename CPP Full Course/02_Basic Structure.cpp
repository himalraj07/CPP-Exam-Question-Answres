/*
    2. Basic Structure of a C++ Program
*/

/*
    A basic structure of a C++ program typically consists of several components. Here's a breakdown of the basic structure:

    1. Preprocessor Directives: These are instructions to the compiler that start with a pound sign (#). They are typically used to include header files or define constants that will be used throughout the program.

    ```cpp
    #include <iostream> // Include the iostream header file

    using namespace std; // Use the standard namespace
    ```

    2. Function Prototypes: Function prototypes declare the functions used in the program before they are defined. They provide the compiler with information about the function's name, return type, and parameters.

    ```cpp
    // Function prototype
    void myFunction(int arg);
    ```

    3. Main Function: Every C++ program must have a `main` function. It serves as the entry point of the program, where the execution starts.

    ```cpp
    int main() {
        // Code goes here
        return 0;
    }
    ```

    4. Function Definitions: This is where you define the functions declared in the prototypes. Function definitions specify the code that should be executed when the function is called.

    ```cpp
    // Function definition
    void myFunction(int arg) {
        // Code goes here
    }
    ```

    5. Statements and Expressions: Inside the `main` function or other user-defined functions, you can write statements and expressions to perform specific actions or calculations.

    ```cpp
    int main() {
        // Print a message
        cout << "Hello, World!" << endl;

        // Declare and initialize variables
        int a = 5;
        int b = 10;
        int sum = a + b;

        // Print the sum
        cout << "The sum of a and b is: " << sum << endl;

        return 0;
    }
    ```

    Note that the order of these components may vary, but the basic structure remains the same. Additionally, C++ programs may contain additional elements such as control structures (if statements, loops), input/output operations, and more, depending on the specific requirements of the program.

*/