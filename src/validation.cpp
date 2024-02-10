#include "../headers/validation.h"

void Validation::validateDifficulty(const int &input)
{
    if (input > 3 || input < 1)
    {
        throw std::invalid_argument("Input Between 1-3");
    }
}