
#ifndef FRONT
#define FRONT




#include "ordered_list.h"

int front(const struct ordered_list *const this, int * returnDatum )	
  {
    if (this == NULL || this->head == NULL)
    {
        return 0;
    }
     
    *returnDatum = (this->head->datum); 
    return 1;
      
  }

  
#endif
