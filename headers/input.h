#ifndef INPUT_H
#define INPUT_H

#include <string>

class Input
{
public:
    static void getUserInput(const std::string &message, int &result);
};

#endif