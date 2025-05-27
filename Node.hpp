#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
#include <iostream>

using namespace std;

template <typename t> class Node
{
    private:
        t item;
        Node<t> left;
        Node<t> rigth;
    
    public:
        Node(t item);
        Node();

        t get_item();
        void set_item(t item);

        Node<t>* get_left();
        void set_left(Node* node);

        Node<t>* get_rigth();
        void set_rigth(Node* node);

        void delete_left();
        void delete_rigth();

        bool is_null();
        bool is_left_null();
        bool is_rigth_null();

        void print();
};

#endif // NODE_H_INCLUDED