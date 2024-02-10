
#include "./menu.cpp"
#include "./input.cpp"
#include "./number.cpp"
#include "./validation.cpp"
#include "./message.cpp"

void showEachNumber(const int& userGuess, const int& generatedNumber);

int main(int argc, char const *argv[])
{
    int difficulty, generatedNumber, userGuess;
    const int upperBounds[] = {5, 20, 50};
    std::string message = Message::lose();

    Menu::show();
    Input::getUserInput("You Choose: ", difficulty);
    Validation::validateDifficulty(difficulty);

    generatedNumber = Number::getRandomIntegerBetween(1, upperBounds[difficulty - 1]);

    Input::getUserInput("Your Guess: ", userGuess);

    if (userGuess == generatedNumber) {
        message = Message::win();
    }

    showEachNumber(userGuess, generatedNumber);
    std::cout << message << std::endl;

    return 0;
}

void showEachNumber(const int& userGuess, const int& generatedNumber) {
    std::cout << "The Number: " << generatedNumber << std::endl;
    std::cout << "Your Guess: " << userGuess << std::endl;
}
