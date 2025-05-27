#include <iostream>
#include "BinaryTree.hpp"
#include "BinaryTree.cpp"

int main()
{
    BinaryTree<int> abb= BinaryTree<int>(50);
    abb.add(20);
    abb.add(60);
    abb.add(15);
    abb.add(21);
    abb.add(75);
    abb.add(68);
    abb.preorden();
    return 0;
}