#include <iostream>
#include <list>

#include "entities/jaritem/JarItem.hpp"
#include "entities/jar/Jar.hpp"

using namespace std;

bool run = true;
Jar jar;

void displayMenu() {
    cout << " - - Menu - - " << endl;
    cout << "1) Add item to jar" << endl;
    cout << "2) Remove item from jar" << endl;
    cout << "3) View single jar item" << endl;
    cout << "4) View all jar items" << endl;
    cout << "5) Exit" << endl;
    cout << endl;
}

void addItem() {
    string itemName;
    string itemContents;
    cout << "Enter the name of the item to be added: ";
    cin >> itemName;
    cout << "What will this item contain: ";
    cin >> itemContents;
    JarItem newItem;
    newItem.setName(itemName);
    newItem.setContent(itemContents);
    jar.addItem(newItem);
    cout << "New item added!" << endl;
}

void removeItem() {
    string itemName;
    cout << "Enter the name of the item to be removed: ";
    cin >> itemName;
    JarItem item = jar.getItemByName(itemName);
    if (item.getName() == "NOITEM") cout << "No item was found with that name!" << endl;
    else {
        jar.deleteItemByName(itemName);
        cout << "Item removed!" << endl;
    }
}

void viewSingleItem() {
    string itemName;
    cout << "Enter the name of the item to be found: ";
    cin >> itemName;
    JarItem item = jar.getItemByName(itemName);
    if (item.getName() == "NOITEM") cout << "No item found with that name!" << endl;
    else cout << "Name: " << item.getName() << endl << "Content: " << item.getContent() << endl;
}

void viewAllJarItems() {
    cout << "Jar items:" << endl << jar.listAllItems() << endl;
}

int main() {
    int menuChoice;
    while (run)
    {
       displayMenu();
        cout << "Enter a menu option: ";
        cin >> menuChoice;

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
                cout << "You did not enter a valid menu option!";
                break;
        }
    }
    return 0;
}