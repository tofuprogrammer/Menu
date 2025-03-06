//
//  main.cpp
//  Menu
//
//  Created by Sam Hart on 06/03/2025.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int chosenOption = 0;
    do {
        std::cout << "Please choose an option: \n";
        std::cout << "1. Option 1\n";
        std::cout << "2. Option 2\n";
        std::cout << "3. Option 3\n";
        std::cout << "4. Exit\n";
        std::cin >> chosenOption;
        if (std::cin.fail()){
            std::cout << "Invalid option!";
            chosenOption = 0;
            break;
        }
        switch (chosenOption) {
            case 1:
                std::cout << "You have selected option 1\n";
                break;
            case 2:
                std::cout << "You have selected option 2\n";
                break;
            case 3:
                std::cout << "You have selected option 3\n";
                break;
        }
    } while (chosenOption != 4);
}
