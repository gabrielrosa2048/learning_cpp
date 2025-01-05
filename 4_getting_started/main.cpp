#include <iostream>


int main(){

    int number = 0;

    std::cout << std::endl;

    std::cout << "Enter you favorite number between 1 and 100: ";
    std::cin >> number;

    std::cout << "Amazing!! That`s my favorite number too!" << std::endl;
    std::cout << "No really!!, " << number << " is my favorite number!" << std::endl;

    std::cout << std::endl;

    return 0;

}