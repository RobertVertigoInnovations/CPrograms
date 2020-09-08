#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ordered_list/construct.h"
#include "ordered_list/insert.h"
#include "ordered_list/ordered_list.h"
#include "ordered_list/node.h"
#include "ordered_list/toString.h"

int main(void)
{
    struct ordered_list *this = construct ();
    insert(this,15);
    insert(this,25);
    insert(this,14);
    insert(this,40);

    char buffer[256];
    
    toString(this,buffer);

    printf("The list is %s\n",buffer);
    
}