#include "OList.h"

OList::OList() {
    head = nullptr;
}

OList::~OList() {
    Node *walker = head;
    Node *trailer = nullptr;

    while(walker != nullptr) {
        trailer = walker;
        walker = walker -> getNext();
        delete trailer;
    }
}

void OList::insert(std::string value) {
    Node *walker = head;
    Node *trailer = nullptr;
    while(walker != nullptr && (walker -> getData()) < value) {
        trailer = walker;
        walker = walker -> getNext();

    }

    Node *newNode = new Node(value);
    if(trailer == nullptr) {
        newNode -> setNext(head);
        head = newNode;
    } else if(walker == nullptr) {
        trailer -> setNext(newNode);
    } else {
        trailer -> setNext(newNode);
        newNode -> setNext(walker);
    }
}

std::string OList::toString() {
    Node *walker = head;
    std::string result;
    
    while(walker != nullptr) {
        result += walker -> getData() + " --> ";
        walker = walker -> getNext();
    }

    result += "nullptr";
    return result;
}

bool OList::contains(std::string value) {
    Node *walker = head;
    while(walker != nullptr) {
        if(value == walker -> getData()) {
            return true;
        }

        walker = walker -> getNext();
    }

    return false;
}

std::string OList::get(int loc) {
    Node *walker = head;
    for(int i = loc; i> 0; i--) {
        if(walker != nullptr) {
            walker = walker -> getNext();
        }
    }

    if(walker == nullptr) {
        return "Past Range";
    }

    return walker -> getData();
}

void OList::remove(int loc) {
    Node *walker = head;
    Node *trailer = nullptr;
    for(int i = loc; i> 0; i--) {
        if(walker != nullptr) {
            trailer = walker;
            walker = walker -> getNext();
        }
    }

    if(walker == nullptr) {
        return;
    }

    if(trailer == nullptr) {
        head = walker -> getNext();
        delete walker;
    } else {
        trailer -> setNext(walker -> getNext());
        delete walker;
    }
    
}

void OList::reverse() {
    Node *prev = nullptr;
    Node *curr = head;
    Node *next = nullptr;
    
    while(curr != nullptr) {
        next = curr -> getNext();
        curr -> setNext(prev);
        prev = curr; 
        curr = next;
    }

    head = prev;
   
}