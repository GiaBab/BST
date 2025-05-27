#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
#include <iostream>

using namespace std;

template <typename T> class Node
{
    private:
        T* item;
        Node<T>* left,* rigth;
    
    public:
        Node(T item);
        Node();

        T* get_item();
        void set_item(T item);

        Node<T>* get_left();
        void set_left(Node* node);

        Node<T>* get_rigth();
        void set_rigth(Node* node);

        void delete_left();
        void delete_rigth();

        bool is_left_null();
        bool is_rigth_null();

        void print();
};

#endif // NODE_H_INCLUDED