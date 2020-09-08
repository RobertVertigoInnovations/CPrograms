#ifndef CONSTRUCT
#define CONSTRUCT


#include <stdlib.h>
#include "ordered_list.h"
struct ordered_list * construct (void)

  {
    struct ordered_list * p = (struct ordered_list *) malloc (sizeof(struct ordered_list) );
    
    if(p!=NULL)
    {
        p->head=NULL;
    }
    return p;
    
    

  }
#endif