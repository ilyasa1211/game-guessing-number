#include "../headers/message.h"

std::string Message::win() {
    return "You guessed the correct number";
}

std::string Message::lose() {
    return "Oops! try again.";
}