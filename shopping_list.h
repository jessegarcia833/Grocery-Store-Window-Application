#ifndef SHOPPING_LIST_H
#define SHOPPING_LIST_H
#include <grocery_item.h>
#include <list>
#include <iterator>

class Shopping_List : public Grocery_Item
{
private:
   // using a linked list to keep track of
   // each new object allocated on the heap
   typedef struct node
    {
       Grocery_Item* item;
       node* next;
    }* nodePtr;

    nodePtr head;
    nodePtr current;
    nodePtr temp;

    double total;
    unsigned int size;
public:
    Shopping_List();
    void add(Grocery_Item* item);
    void remove(Grocery_Item* item);
    void clear();
    double getSize();
    virtual double get_price();
    virtual ~Shopping_List();
};
#endif // SHOPPING_LIST_H
