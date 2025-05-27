#include "BinarySearchTree.hpp"
#include <iostream>

template <typename t> BinaryTree<t>::BinaryTree(t item)
{
    this->root=new Node<t>(item);
}
template <typename t> BinaryTree<t>::BinaryTree()
{
    this->root=nullptr;
}

template <typename t> Node<t>* BinaryTree<t>::get_root()
{
    return this->root;
}

template <typename t> Node<t>* BinaryTree<t>::set_root(Node<t>* node)
{
    return this->root=node;
}

template <typename t> Node<t>* BinaryTree<t>::add(Node<t>* root, t item)
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
template <typename t> void BinaryTree<t>::add(t item)
{
    this->add(this->root, item);
}

template <typename t> Node<t>* BinaryTree<t>::find_min(Node<t> root)
{
    while (root->izq != nullptr) root = root->izq;
    return root;
}