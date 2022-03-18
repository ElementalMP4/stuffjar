#include <iostream>
#include <list>

#include "Jar.hpp"
#include "../jaritem/JarItem.hpp"

using namespace std;

void Jar::addItem(JarItem item) {
    items.push_front(item);
}

JarItem Jar::getItemByName(string itemName) {
    list<JarItem>:: iterator it;
    bool keepLooking = true;
    JarItem item;
    item.setName("NOITEM");
    for (it = items.begin(); it != items.end(); it++)
    {
        if (it-> getName() == itemName && keepLooking) {
            item.setContent(it -> getContent());
            item.setName(it -> getName());
            keepLooking = false;
        }
    }
    return item;
}

void Jar::deleteItemByName(string itemName) {
list<JarItem>:: iterator it;
    for (it = items.begin(); it != items.end(); it++)
    {
        if (it-> getName() == itemName) {
            items.erase(it);
        }
    }
}

string Jar::listAllItems() {
    list<JarItem>:: iterator it;
    string jarContents;
    for (it = items.begin(); it != items.end(); it++)
    {
        jarContents += it -> getName() + "\n";
    }
    return jarContents;
}