#include <iostream>

#include "../headers/input.h"


void Input::getUserInput(const std::string &message, int &result) {
    std::cout << message;
    std::cin >> result;
}


