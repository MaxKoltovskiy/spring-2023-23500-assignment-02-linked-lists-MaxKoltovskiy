#pragma once
#include "Node.h"

class List {
    private:
        Node *head;
    public:
        List();
        void insert(std::string data);
        std::string toString();

        bool contains(std::string item);
        void remove(int loc);

        ~List();
};