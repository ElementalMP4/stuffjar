#include <iostream>

#include "Jar.hpp"
#include "../jaritem/JarItem.hpp"

void Jar::addItem(JarItem item) {
    items.push_front(item);
}

JarItem Jar::getItemByName(std::string itemName) {
    std::list<JarItem>::iterator it;
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

void Jar::deleteItemByName(std::string itemName) {
    std::list<JarItem>::iterator it;
    for (it = items.begin(); it != items.end(); it++)
    {
        if (it-> getName() == itemName) {
            items.erase(it);
        }
    }
}

std::string Jar::listAllItems() {
    std::list<JarItem>::iterator it;
    std::string jarContents;
    for (it = items.begin(); it != items.end(); it++)
    {
        jarContents += it -> getName() + "\n";
    }
    return jarContents;
}