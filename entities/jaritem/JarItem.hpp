#pragma once

#include <iostream>

class JarItem {
    private:
        std::string name;
        std::string content;
    public:
        std::string getName();
        std::string getContent();
        void setName(std::string);
        void setContent(std::string);
};