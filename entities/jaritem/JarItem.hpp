#pragma once

#include <iostream>

using namespace std;

class JarItem {
    private:
        string name;
        string content;
    public:
        string getName();
        string getContent();
        void setName(string);
        void setContent(string);
};