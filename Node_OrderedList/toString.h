
#ifndef TOSTRING
#define TOSTRING

#include <stdio.h>
#include "ordered_list.h"

void toString (const struct ordered_list *const this, char *const buffer)

  {

    if (this == NULL)
    {
        buffer[0] = '\0';
    }
    else 
    {
        struct node * current = this->head;
        buffer[0]='[';
        unsigned int i = 1;
        
        while(current != NULL)
            {
               i += sprintf(buffer + i, "%d,", current->datum);
               current=current->next;
            }
            if(i != 1)
            {
                buffer[i-1] = ']';
    		    buffer[i] = '\0';
            }
            else
            {
                buffer[i]=']';
                buffer[i+1]='\0';

            }

        }
  }
  
  #endif

    