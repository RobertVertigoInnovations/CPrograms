#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ( void )
  {
  unsigned int seed ;
  float sum;
  float meanPh;
  float count = 0;
  float squaredPlus ; 
  float divideSquarePlus;
  int x [100] ;

  
  printf ( "Enter a seed value for the random number generator : " ) ;
  scanf ( "%u", & seed ) ;
  srand ( seed ) ;

  for ( int i = 0 ; i < 100 ; i ++ )
  {
    x[i] = (rand() % 10001) ;
    sum += x[i];
    count++;
  }
  meanPh = sum / count ;
  printf("The sum is : %f\n",sum);
  printf("The count is : %f\n",count);
  printf("Mean is : %f\n\n",meanPh);
  for(int j = 0 ; j < 100 ; j++)
  {
    squaredPlus += pow((x[j] - meanPh),2);
  }
  divideSquarePlus = squaredPlus / count;
  printf("Square Root is %.1f\n",sqrt(divideSquarePlus));
  
}