#ifndef INSERT
#define INSERT

#include "ordered_list.h"
#include "node.h"


int insert (struct ordered_list *const this, const int datum)
  {
    
    struct node * current = (struct node * ) malloc (sizeof(struct node) ); 
    struct node * previous = (struct node * ) malloc (sizeof(struct node) ); 
    struct node * temp = (struct node * ) malloc (sizeof(struct node) ); 
    
    if ( this== NULL )
        return 0 ;
    if (current == NULL)
    	return 0 ;
    if(temp == NULL)
        return 0;
    
    current->datum = datum ;
    current->next = NULL;
 
    if(this->head == NULL)
        {
            this->head = current;
            return 1;
        }
    else if(current->datum <= this->head->datum)
    {
        current->datum = datum;
        current->next = this->head;
        this->head = current ;
        return 1;
    }
    else
    {
        previous = this->head;
        temp = this->head->next;
        while(temp != NULL && current->datum > temp->datum)
            {
                previous = temp;
                temp = previous->next;
            }
        current->next = temp;
        previous->next = current;
        return 1;
    }

  }
#endif

