#include "BinaryTree.hpp"
#include "Node.hpp"
#include "Node.cpp"
#include <iostream>

template <typename T> BinaryTree<T>::BinaryTree(T item)
{
    this->root=new Node<T>(item);
}
template <typename T> BinaryTree<T>::BinaryTree()
{
    this->root=nullptr;
}

template <typename T> Node<T>* BinaryTree<T>::get_root()
{
    return this->root;
}

template <typename T> Node<T>* BinaryTree<T>::set_root(Node<T>* node)
{
    return this->root=node;
}

template <typename T> bool BinaryTree<T>::is_null()
{
    return this->root==nullptr;
}

template <typename T> Node<T>* BinaryTree<T>::add(Node<T>* root, T item)
{
    if(root!=nullptr)
    {
        if(item<*(root->get_item()))
        {
            return add(root->get_left(), item);
        }
        else if(item>*(root->get_item()))
        {
            return add(root->get_rigth(), item);
        }
    }
    return new Node<T>(item);
}
template <typename T> void BinaryTree<T>::add(T item)
{
    this->add(this->root, item);
}

template <typename T> Node<T>* BinaryTree<T>::find_min(Node<T>* root)
{
    while (root->left != nullptr) root = root->left;
    return root;
}
template <typename T> Node<T>* BinaryTree<T>::deleteItem(Node<T>* root, T item)
{
    if (root == nullptr) return nullptr;

        if (root->item == item) {
            if (root->left == nullptr && root->rigth == nullptr) {
                delete root;
                return nullptr;
            }
            if (root->left == nullptr) {
                Node<T>* temp = root->rigth;
                delete root;
                return temp;
            }
            if (root->rigth == nullptr) {
                Node<T>* temp = root->left;
                delete root;
                return temp;
            }

            Node<T>* successor = findMin(root->rigth);
            root->item = successor->item;
            root->rigth = deleteItem(root->rigth, successor->item);
        } else {
            root->left = deleteItem(root->left, item);
            root->rigth = deleteItem(root->rigth, item);
        }
        return root;
}
template <typename T> void BinaryTree<T>::deleteItem(T item)
{
    this->deleteItem(this->root, item);
}

template <typename T> void BinaryTree<T>::preorden(Node<T>* root)
{
    if(this->root!=nullptr)
    {
        cout<<*(root->get_item());
        preorden(root->get_left());
        preorden(root->get_rigth());
    }
}

template <typename T> void BinaryTree<T>::preorden()
{
    preorden(this->root);
}