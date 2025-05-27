#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#include "Node.hpp"
#include <iostream>

template <typename t>

class BinaryTree
{
    private:
        Node<t>* root;

        Node<t>* add(Node<t>* root, t item);
        Node<t>* find_min(Node<t> root);

    public:
        BinaryTree(t item);
        BinaryTree();

        Node<t>* get_root();

        Node<t>* set_root(Node<t>* node);

        void add(t item);
};

#endif //  TREE_H_INCLUDED