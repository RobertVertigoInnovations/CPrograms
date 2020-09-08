#ifndef DESTRUCT
#define DESTRUCT    


#include "ordered_list.h"


void destruct(struct ordered_list * * this)
{

    clear (*this) ;
    free(*this) ;
    *this = NULL;
}


#endif