#include <stdio.h>
#include <stdlib.h>

unsigned int hailstone(unsigned int a) {
    unsigned int count = 1;
    while (a != 1) {
        if (a % 2 == 0) {
            a = a / 2;
            count++;
        }
        else {
            a = (a * 3) + 1;
            count++;
        }
    }
    return count;
}

int main ( int argc, char * argv [] )
{
    if (argc != 2) 
      {
        printf("\n    There must be exactly 2 command-line arguments:  argv[0] & L.\n\n");
        return 0;
      }
      unsigned long int L = strtoul ( argv[1], NULL, 10 );
      int count=1;
      int x = L;
      
      
      
    int i = 1;
    while(hailstone(i) < L) {
    i++;
    }

      printf("\n");
      printf("    ==  ===========================================================================================\n");
      printf("    ==  %d is the least positive integer whose `hailstone sequence` is of length at least %d.\n",i,x);
      printf("    ==  ===========================================================================================\n\n");
      
 return 1;
}
      


