#include "Node.hpp"
#include <iostream>

using namespace std;

template <typename T> Node<T>::Node(T item)
{
    this->item=new T(item);
    this->left=this->rigth=nullptr;
}

template <typename T> Node<T>::Node()
{
    this->item=this->left=this->rigth=nullptr;
}

template <typename T> T* Node<T>::get_item()
{
    return this->item;
}
template <typename T> void Node<T>::set_item(T item)
{
    T* aux=this->get_item();
    this->item=new T(item);
    delete aux;
}

template <typename T> Node<T>* Node<T>::get_left()
{
    return this->left;
}
template <typename T> void Node<T>::set_left(Node<T>* node)
{
    this->left=node;
}

template <typename T> Node<T>* Node<T>::get_rigth()
{
    return this->rigth;
}
template <typename T> void Node<T>::set_rigth(Node* node)
{
    this->rigth=node;
}

template <typename T> void Node<T>::delete_left()
{
    delete this->left;
}
template <typename T> void Node<T>::delete_rigth()
{
    delete this->rigth;
}

template <typename T> bool Node<T>::is_left_null()
{
    return this->left=nullptr;
}
template <typename T> bool Node<T>::is_rigth_null()
{
    return this->rigth=nullptr;
}

template <typename T> void Node<T>::print()
{
    cout<<this->item;
}