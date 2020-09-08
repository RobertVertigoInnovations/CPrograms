#ifndef ISEMPTY
#define ISEMPTY


#include "ordered_list.h"

int isEmpty	(struct ordered_list *const this)	
{
    if(this==NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
}
#endif