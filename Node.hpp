#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
#include <iostream>

using namespace std;

template <typename T> class Node
{
    private:
        T item;
        Node<T>* left,* right;
    
    public:
        Node(T item);
        Node();

        T get_item();
        void set_item(T item);

        Node<T>* get_left();
        void set_left(Node* node);

        Node<T>* get_right();
        void set_right(Node* node);

        void delete_left();
        void delete_right();

        bool is_left_null();
        bool is_right_null();

        void print();
};

#endif // NODE_H_INCLUDED