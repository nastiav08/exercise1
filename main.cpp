#include <iostream>
#include <string>


int multiply(int num1, int num2) {
    return num1 * num2;
}

int main() {

    std::string greeting = "Hello STRING";
    int year = 0;

    while (year < 1000){
        int result = multiply(2,2);
        std::string s = std::to_string(result);

        std::cout << "multiplication result is " + s << std::endl;
        std::cout << "Please enter your birth year" << std::endl;
        std::cin >> year;

        if (year == 0) {
            std::cout << "THIS IS WRONG ITS ZERO" << std::endl;
        } else if (year < 20) {
            std::cout << "Less then twenty" << std::endl;
        }
    }

    std::cout << "GAME OVER" << std::endl;

    return 0;
}
