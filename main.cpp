#include "List.h"

int main() 
{
    List *l = new List();
    l -> insert("a");
    l -> insert("b");
    l -> insert("c");
    std::cout<< l -> toString() << "\n\n";

    std::cout<< "Contains(a): " << l -> contains("a") << "\n";
    std::cout<< "Contains(e): " << l -> contains("e") << "\n";

    l -> remove(1);
    std::cout<< "remove(1): ";
    std::cout<< l -> toString() << "\n\n";

    delete l;
    std::cout<< "toString after deletion: "<< "\n";
    std::cout<<  l -> toString() << "\n";


    return 0;
}