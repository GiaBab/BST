#include "Node.hpp"
#include <iostream>

using namespace std;

template <typename T> Node<T>::Node(T item)
{
    this->item=item;
    this->left=this->right=nullptr;
}

template <typename T> Node<T>::Node()
{
    this->item=this->left=this->right=nullptr;
}

template <typename T> T Node<T>::get_item()
{
    return item;
}
template <typename T> void Node<T>::set_item(T item)
{
    this->item=item;
}

template <typename T> Node<T>* Node<T>::get_left()
{
    return left;
}
template <typename T> void Node<T>::set_left(Node<T>* node)
{
    left=node;
}

template <typename T> Node<T>* Node<T>::get_right()
{
    return right;
}
template <typename T> void Node<T>::set_right(Node* node)
{
    right=node;
}

template <typename T> void Node<T>::delete_left()
{
    delete left;
}
template <typename T> void Node<T>::delete_right()
{
    delete right;
}

template <typename T> bool Node<T>::is_left_null()
{
    return left==nullptr;
}
template <typename T> bool Node<T>::is_right_null()
{
    return right==nullptr;
}

template <typename T> void Node<T>::print()
{
    cout<<this->item;
}