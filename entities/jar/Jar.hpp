#include <iostream>
#include <list>

#include "../jaritem/JarItem.hpp"

class Jar {
    private:
        std::list<JarItem> items;
    public:
        JarItem getItemByName(std::string);
        void deleteItemByName(std::string);
        void addItem(JarItem);
        std::string listAllItems();
};