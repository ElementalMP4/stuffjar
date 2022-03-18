#include <iostream>

#include "JarItem.hpp"

std::string JarItem::getName() {
    return name;
}

std::string JarItem::getContent() {
    return content;
}

void JarItem::setName(std::string itemName) {
    name = itemName;
}

void JarItem::setContent(std::string itemContent) {
    content = itemContent;
}