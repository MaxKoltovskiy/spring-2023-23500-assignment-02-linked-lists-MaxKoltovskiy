#include "List.h"

int main() 
{
    List *l = new List();
    l -> insert("a");
    l -> insert("b");
    l -> insert("c");
    std::cout<< l -> toString() << "\n";

    
    return 0;
}