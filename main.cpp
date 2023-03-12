#include "List.h"
#include "OList.h"

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

    std::cout<< "------------------------------\n\n";

    OList *o = new OList();
    o -> insert("b");
    std::cout<< o -> toString() << "\n";
    o -> insert("a");
    std::cout<< o -> toString() << "\n";
    o -> insert("d");
    std::cout<< o -> toString() << "\n";
    o -> insert("c");
    std::cout<< o -> toString() << "\n";
    
    std::cout<< "contains(a): " << o -> contains("a")<< "\n";
    std::cout<< "contains(c): " << o -> contains("c")<< "\n";
    std::cout<< "contains(e): " << o -> contains("e")<< "\n";
    
    std::cout<< "get(0): " << o -> get(0)<< "\n";
    std::cout<< "get(2): " << o -> get(2)<< "\n";
    std::cout<< "get(4): " << o -> get(4)<< "\n";

    o -> remove(3);
    std::cout<< o -> toString() << "\n";

    std::cout<< "\nReversed: \n";
    o -> reverse();
    std::cout<< o -> toString() << "\n";



    


    return 0;
}