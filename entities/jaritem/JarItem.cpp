#include <iostream>

#include "JarItem.hpp"

using namespace std;

string JarItem::getName() {
    return name;
}

string JarItem::getContent() {
    return content;
}

void JarItem::setName(string itemName) {
    name = itemName;
}

void JarItem::setContent(string itemContent) {
    content = itemContent;
}