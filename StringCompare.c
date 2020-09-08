/*
Function longestString accepts, as input, an array of strings.
Function longestString returns the longest string in the array of strings.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char * longestString ( char * array [], const size_t arraySize );
int main  ( void )
  {
    char * array [] = { "dog", "trees", "bird" } ;
  const size_t sizeOfArray = (sizeof array) / (sizeof array[0]) ;
  char * returnedString = longestString ( array, sizeOfArray ) ;
  printf("\n\n\n%s is the biggest one \n\n ",returnedString);
  }

char * longestString ( char * array [], const size_t arraySize )
{
 char *a = *array;
 int i=0;
 char j = strlen(*array);
 int max = 0;

  while(i < arraySize)
 {  
   j = strlen(*array);  
    if(j>max)
    {
      max = j;    
      a = *array;    
    }
   i++;
   array++;  
 }
 return a;
}
  
  
  
  
  
  