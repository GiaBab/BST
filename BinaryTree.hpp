#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#include "Node.hpp"
#include <iostream>

template <typename T> class BinaryTree
{
    private:
        Node<T>* root;

        Node<T>* find_min(Node<T>* root);
        Node<T>* delete_item(Node<T>* root, T item);
        void preorden(Node<T>* root);

    public:
        BinaryTree(T item);
        BinaryTree();
        ~BinaryTree();

        Node<T>* get_root();

        Node<T>* set_root(Node<T>* node);

        bool is_null();

        void add(T item);
        void delete_item(T item);

        void preorden();
};

#endif //  TREE_H_INCLUDED