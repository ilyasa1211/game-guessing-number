
#ifndef MENU_H
#define MENU_H

#include <string>
#include <iostream>

class Menu {
    private:
        static std::string availableMenus[3];
    public:
        static void show();
};

#endif