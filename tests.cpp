#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "OList.h"

TEST_CASE("Constructor") {
    OList *l = new OList();
    CHECK(l -> toString() == "nullptr");
}
TEST_CASE("Destructor") {
    OList *l = new OList();
    l -> insert("b");
    l -> insert("a");
    l -> insert("c");
    delete l;
    l = nullptr;
    CHECK(l == nullptr);
}
TEST_CASE("Insert") {
    OList *l = new OList();
    l -> insert("b");
    l -> insert("a");
    l -> insert("c");
    CHECK(l -> toString() == "a --> b --> c --> nullptr");
}
TEST_CASE("Contains") {
    OList *l = new OList();
    l -> insert("b");
    l -> insert("a");
    l -> insert("c");
    CHECK(l -> contains("b") == 1);
}
TEST_CASE("Get") {
    OList *l = new OList();
    l -> insert("b");
    l -> insert("a");
    l -> insert("c");
    CHECK(l -> get(0) == "a");
    CHECK(l -> get(2) == "c");
}
TEST_CASE("Remove") {
    OList *l = new OList();
    l -> insert("b");
    l -> insert("a");
    l -> insert("c");
    l -> remove(1);
    CHECK(l -> toString() == "a --> c --> nullptr");
    l -> remove(0);
    CHECK(l -> toString() == "c --> nullptr");
}
TEST_CASE("Reverse") {
    OList *l = new OList();
    l -> insert("b");
    l -> insert("a");
    l -> insert("c");
    l -> reverse();
    CHECK(l -> toString() == "c --> b --> a --> nullptr");
}