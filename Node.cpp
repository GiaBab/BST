#include "Node.h"

template <typename t>
using namespace std;

Node::Node(t item)
{
    this.item=item;
    this->left=this->rigth=nullspd;
}