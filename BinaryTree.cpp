#include "BinaryTree.hpp"
#include "Node.hpp"
#include "Node.cpp"
#include <iostream>

template <typename T> BinaryTree<T>::BinaryTree(T item)
{
    root=new Node<T>(item);
}
template <typename T> BinaryTree<T>::BinaryTree()
{
    root=nullptr;
}

template <typename T> BinaryTree<T>::~BinaryTree()
{
    while(root->get_left()!=nullptr||root->get_right()!=nullptr)
    {
        if(root->get_left()!=nullptr)
        {
            delete_item(root->get_left()->get_item());
        }
        if(root->get_right()!=nullptr)
        {
            delete_item(root->get_right()->get_item());
        }
    }
    delete_item(root->get_item());
}

template <typename T> Node<T>* BinaryTree<T>::get_root()
{
    return root;
}

template <typename T> Node<T>* BinaryTree<T>::set_root(Node<T>* node)
{
    return root=node;
}

template <typename T> bool BinaryTree<T>::is_null()
{
    return root==nullptr;
}

template <typename T> void BinaryTree<T>::add(T item)
{
    Node<T>* aux= root;
    bool flag=true;
    while(aux!=nullptr&&flag)
    {
        if(item<aux->get_item())
        {
            if(aux->is_left_null())
            {
                aux->set_left(new Node<T>(item));
                flag=false;
            }
            aux=aux->get_left();
        }
        else if(item>aux->get_item())
        {
            if(aux->is_right_null())
            {
                aux->set_right(new Node<T>(item));
                flag=false;
            }
            aux=aux->get_right();
        }
    }
    if(aux==nullptr)
    {
        aux=new Node<T>(item);
    }
}

template <typename T> Node<T>* BinaryTree<T>::find_min(Node<T>* root)
{
    while (root->get_left()!=nullptr) root = root->get_left();
    return root;
}

template <typename T> Node<T>* BinaryTree<T>::delete_item(Node<T>* root, T item)
{
    if (root == nullptr) return nullptr;

        if (root->get_item() == item) {
            if (root->is_left_null() && root->is_right_null()) {
                delete root;
                return nullptr;
            }
            if (root->is_left_null()) {
                Node<T>* temp = root->get_right();
                delete root;
                return temp;
            }
            if (root->is_right_null()) {
                Node<T>* temp = root->get_left();
                delete root;
                return temp;
            }

            Node<T>* successor = find_min(root->get_right());
            root->set_item(successor->get_item());
            root->set_right(delete_item(root->get_right(), successor->get_item()));
        } else {
            root->set_left(delete_item(root->get_left(), item));
            root->set_right(delete_item(root->get_right(), item));
        }
        return root;
}
template <typename T> void BinaryTree<T>::delete_item(T item)
{
    this->delete_item(this->root, item);
}

template <typename T> void BinaryTree<T>::preorden(Node<T>* root)
{
    if(root!=nullptr)
    {
        cout<<root->get_item()<<" - ";
        preorden(root->get_left());
        preorden(root->get_right());
    }
}

template <typename T> void BinaryTree<T>::preorden()
{
    preorden(this->root);
}
