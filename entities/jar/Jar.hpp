#include <iostream>
#include <list>

#include "../jaritem/JarItem.hpp"

using namespace std;

class Jar {
    private:
        list<JarItem> items;
    public:
        JarItem getItemByName(string);
        void deleteItemByName(string);
        void addItem(JarItem);
        string listAllItems();
};