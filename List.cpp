#include "List.h"

List:: List() {
    head = nullptr;
}

void List:: insert(std::string data) {
    Node *tmp = new Node(data);
    tmp -> setNext(head);
    head = tmp;
}

std::string List:: toString() {
    std::string result;
    Node *walker = head;
    while(walker != nullptr) {
        result += walker -> getData();
        result += "-->";
        walker = walker -> getNext();
    }

    result += "nullptr";
    return result;
}


bool List:: contains(std::string item) {
    Node *walker = head;

    while(walker != nullptr) {
        if(! (item.compare(walker -> getData() ))) {
            return true;
        }

        walker = walker -> getNext();
    }

    return false;
}

void List:: remove(int loc) {
    Node *walker = head;
    Node *trailer = nullptr;

    for(int i = loc; i > 0; i--) {
        trailer = walker;
        walker = walker -> getNext();

        if(walker == nullptr) {
            return;
        }
    }

    trailer -> setNext( walker -> getNext());
    delete walker;
}

List:: ~List() {
    Node *walker = head;
    Node *trailer = nullptr;

    while(walker != nullptr) {
        trailer = walker;
        walker = walker -> getNext();
        delete trailer;
    }

}