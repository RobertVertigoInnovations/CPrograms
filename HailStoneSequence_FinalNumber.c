#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char * argv [] )
{

  if (argc != 2) 
      {
        printf("\n    There must be exactly 2 command-line arguments:  argv[0] & N.\n\n");
        return 0;
      }
      unsigned long int N = strtoul ( argv[1], NULL, 10 );
      int count=1;
      int x = N;


      while (N != 1)

        {
          
          if (N % 2 == 0)
          {
              N = N / 2;
              count++;
              
          }
          else
          {
              N = N * 3 + 1;
              count++;
              
          }
      }
      printf("\n");
      printf("    ==  ===========================================================================================\n");
      printf("    ==  The `hailstone sequence` that begins with the positive integer %d is of length %d.\n",x,count);
      printf("    ==  ===========================================================================================\n\n");
      

      
  return 1;
}
