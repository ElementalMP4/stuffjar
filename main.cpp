#include <iostream>

#include "entities/jaritem/JarItem.hpp"
#include "entities/jar/Jar.hpp"

bool run = true;
Jar jar;

void displayMenu() {
    std::cout << " - - Menu - - " << std::endl;
    std::cout << "1) Add item to jar" << std::endl;
    std::cout << "2) Remove item from jar" << std::endl;
    std::cout << "3) View single jar item" << std::endl;
    std::cout << "4) View all jar items" << std::endl;
    std::cout << "5) Exit" << std::endl;
    std::cout << std::endl;
}

void addItem() {
    std::string itemName;
    std::string itemContents;
    std::cout << "Enter the name of the item to be added: ";
    std::cin >> itemName;
    std::cout << "What will this item contain: ";
    std::cin >> itemContents;
    JarItem newItem;
    newItem.setName(itemName);
    newItem.setContent(itemContents);
    jar.addItem(newItem);
    std::cout << "New item added!" << std::endl;
}

void removeItem() {
    std::string itemName;
    std::cout << "Enter the name of the item to be removed: ";
    std::cin >> itemName;
    JarItem item = jar.getItemByName(itemName);
    if (item.getName() == "NOITEM") std::cout << "No item was found with that name!" << std::endl;
    else {
        jar.deleteItemByName(itemName);
        std::cout << "Item removed!" << std::endl;
    }
}

void viewSingleItem() {
    std::string itemName;
    std::cout << "Enter the name of the item to be found: ";
    std::cin >> itemName;
    JarItem item = jar.getItemByName(itemName);
    if (item.getName() == "NOITEM") std::cout << "No item found with that name!" << std::endl;
    else std::cout << "Name: " << item.getName() << std::endl << "Content: " << item.getContent() << std::endl;
}

void viewAllJarItems() {
   std::cout << "Jar items:" << std::endl << jar.listAllItems() << std::endl;
}

int main() {
    int menuChoice;
    while (run)
    {
       displayMenu();
        std::cout << "Enter a menu option: ";
        std::cin >> menuChoice;

        switch (menuChoice) {
            case 1:
                addItem();
                break;
            case 2:
                removeItem();
                break;
            case 3:
                viewSingleItem();
                break;
            case 4:
                viewAllJarItems();
                break;
            case 5:
                run = false;
                break;
            default:
                std::cout << "You did not enter a valid menu option!";
                break;
        }
    }
    return 0;
}