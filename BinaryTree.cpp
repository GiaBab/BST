#include "BinaryTree.hpp"
#include "Node.hpp"
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

template <typename t> bool BinaryTree<t>::is_null()
{
    return this->root->is_null();
}

template <typename t> Node<t>* BinaryTree<t>::add(Node<t>* root, t item)
{
    if(root->is_null())
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

template <typename t> Node<t>* BinaryTree<t>::find_min(Node<t>* root)
{
    while (root->left != nullptr) root = root->left;
    return root;
}
template <typename t> Node<t>* BinaryTree<t>::deleteItem(Node<t>* root, t item)
{
    if (root == nullptr) return nullptr;

        if (root->item == item) {
            if (root->left == nullptr && root->rigth == nullptr) {
                delete root;
                return nullptr;
            }
            if (root->left == nullptr) {
                Node<t>* temp = root->rigth;
                delete root;
                return temp;
            }
            if (root->rigth == nullptr) {
                Node<t>* temp = root->left;
                delete root;
                return temp;
            }

            Node<t>* successor = findMin(root->rigth);
            root->item = successor->item;
            root->rigth = deleteItem(root->rigth, successor->item);
        } else {
            root->left = deleteItem(root->left, item);
            root->rigth = deleteItem(root->rigth, item);
        }
        return root;
}
template <typename t> void BinaryTree<t>::deleteItem(t item)
{
    this->deleteItem(this->root, item);
}