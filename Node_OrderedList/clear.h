#ifndef CLEAR
#define CLEAR

#include "ordered_list.h"
#include "deleteFront.h"

void clear (struct ordered_list *const this)	
  {
      
      if( this == NULL)
      {
          return;
      }
      while(deleteFront(this))
        ;
        this->head = NULL;
    
  }
  #endif