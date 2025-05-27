#include "Node.hpp"
#include <iostream>

using namespace std;

template <typename t> Node<t>::Node(t item)
{
    this->item=item;
    this->left=this->rigth=nullptr;
}

template <typename t> Node<t>::Node()
{
    this->item=this->left=this->rigth=nullptr;
}

template <typename t> t Node<t>::get_item()
{
return this->item;
}
template <typename t> void Node<t>::set_item(t item)
{
    return this->item=item;
}

template <typename t> Node<t>* Node<t>::get_left()
{
    return this->left;
}
template <typename t> void Node<t>::set_left(Node<t>* node)
{
    return this->left=node;
}

template <typename t> Node<t>* Node<t>::get_rigth()
{
    return this->rigth;
}
template <typename t> void Node<t>::set_rigth(Node* node)
{
            return this->rigth=node;
}

template <typename t> void Node<t>::delete_left()
{
    delete this->left;
}
template <typename t> void Node<t>::delete_rigth()
{
    delete this->rigth;
}

template <typename t> bool Node<t>::is_null()
{
    return this->item==nullptr;
}
template <typename t> bool Node<t>::is_left_null()
{
    return this->left=nullptr;
}
template <typename t> bool Node<t>::is_rigth_null()
{
    return this->rigth=nullptr;
}

template <typename t> void Node<t>::print()
{
    cout<<this->item;
}