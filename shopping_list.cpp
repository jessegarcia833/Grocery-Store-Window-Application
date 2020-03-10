#include "shopping_list.h"

Shopping_List::Shopping_List()
{
    head = nullptr;
    current = nullptr;
    temp = nullptr;
    total = 0.0;
    size = 0;
}

void Shopping_List::add(Grocery_Item* item)
{
    nodePtr n = new node;
    n->next = nullptr;
    n->item = item;

    if(head != nullptr)
    {
        current = head;
        while(current->next != nullptr)
        {
            current = current->next;
        }
        current->next = n;
    }
    else
    {
        head = n;
    }
    total = total + item->get_price();
    size++;
}

void Shopping_List::remove(Grocery_Item* item)
{
    nodePtr deletePtr = nullptr;

    temp = head;
    current = head;

    while(current != nullptr && current->item != item)
    {
        temp = current;
        current = current->next;
    }
    if(current == nullptr)
    {
        delete deletePtr;
    }

    else
    {
        deletePtr = current;
        current = current->next;
        temp->next = current;
        if(deletePtr == head)
        {
            head = head->next;
            temp = nullptr;
        }
        size--;

        if(size == 0)
        {
            total = 0.0;
        }
        else
        {
            total = total - item->get_price();
        }

        delete deletePtr;
    }

}

void Shopping_List::clear()
{
    temp = head;

    while(temp != nullptr)
    {
        head = temp->next;
        delete temp;
        temp = head;
        size--;
    }

    total = 0;
}

double Shopping_List::get_price()
{
    return total;
}

double Shopping_List::getSize()
{
    return size;
}


Shopping_List::~Shopping_List()
{

}
