#include <ctime>
#include <cstdlib>

#include "../headers/number.h"

int Number::getRandomIntegerBetween(int min, int max) {
    srand(time(0));    

    return min + rand() % (max - min + 1);
};