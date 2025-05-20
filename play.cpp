#include <stdio.h>
#include <stdint.h>
// #include <string.h>
#include <iostream>
#include <stdexcept>

std::string a = "Hello";

float ax;

int main() {
    printf("Hello World\n");
    std::cout << "Hello World\n";


    try {
        std::cout << "Please Enter Number : ";
        std::cin >> ax;
    }
    catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << '\n';
        return 1; // Exit with an error code
    }
    catch (...) {
        std::cerr << "An unexpected error occurred.\n";
        return 1; // Exit with an error code
    }

    std::cout << ax << std::endl;

    std::cout << a;
}