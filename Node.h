#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
template <typename t>

class Node<t>
{
    private:
        t item;
        Node<t> left;
        Node<t> rigth;
    
    public:
        Node(t item);

        t get_item();
        t set_item();

        Node<t>* get_left();
        Node<t>* set_left(Node* node);

        Node<t>* get_rigth();
        Node<t>* set_rigth(Node* node);

        void delete_left();
        void delete_rigth();

        bool is_null();
        bool is_left_null();
        bool is_rigth_null();
}


#endif // NODE_H_INCLUDED