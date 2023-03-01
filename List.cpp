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
    Node *walker;
    while(walker != nullptr) {
        result += walker -> getData();
        result += "-->";
        walker = walker -> getNext();
    }

    result += "nullptr";
    return result;
}