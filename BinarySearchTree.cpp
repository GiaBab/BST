#include "BinarySearchTree.hpp"
#include <iostream>

template <typename t> BinarySearchTree<t>::BinarySearchTree(t item)
{
    this->root=new Node<t>(item);
}
template <typename t> BinarySearchTree<t>::BinarySearchTree()
{
    this->root=nullptr;
}

template <typename t> Node<t>* BinarySearchTree<t>::get_root()
{
    return this->root;
}

template <typename t> Node<t>* BinarySearchTree<t>::set_root(Node<t>* node)
{
    return this->root=node;
}

template <typename t> Node<t>* BinarySearchTree<t>::add(Node<t>* root, t item)
{
    if(root->is_null)
    {
        root= new Node(item);
    }
    if(item<root->get_item())
    {
                root->left= add(root->get_left())
    }
    if(item>root->get_item())
    {
        root->rigth= add(root->get_rigth())
    }
    return root;
}
template <typename t> void BinarySearchTree<t>::add(t item)
{
    this->add(this->root, item);
}

template <typename t> Node<t>* BinarySearchTree<t>::find_min(Node<t> root)
{
    while (root->izq != nullptr) root = root->izq;
    return root;
}