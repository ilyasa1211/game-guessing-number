#include <string>
#include <iostream>

#include "../headers/menu.h"

std::string Menu::availableMenus[3] = {
    "Easy",
    "Medium",
    "Hard",
};
void Menu::show()
{
    int i = 0;
    for (const std::string &availableMenu : availableMenus)
    {
        std::cout << ++i << ". " << availableMenu << std::endl;
    }

    std::cout << std::endl;
};