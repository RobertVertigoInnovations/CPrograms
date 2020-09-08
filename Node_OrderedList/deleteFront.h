#ifndef DELETEFRONT
#define DELETEFRONT


#include "ordered_list.h"

int deleteFront (struct ordered_list *const this)

  {
    
    if (this == NULL || this->head == NULL)
        return 0;
        
    struct node * toDelete = this->head;
    
    
    this->head = toDelete->next;

    free(toDelete);
    return 1;
  }
 
 #endif
