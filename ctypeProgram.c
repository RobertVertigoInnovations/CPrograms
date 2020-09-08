// characters are letters, how many are punctuation characters, 
// and how many are whitespace characters. The program also 
// indicates how many of the letters are lowercase, and how many are uppercase.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



int main(int argc, char *argv[])
{
  int ch ; //place to store each character that is read
  
  FILE *fp;
  unsigned long int characterCountCh = 0 ;
  unsigned long int punctuationCh = 0 ; 
  unsigned long int whiteSpaceCh = 0;
  unsigned long int lowercaseCh = 0;
  unsigned long int uppercaseCh = 0;
  
  if( argc != 2 )
  {
    printf( "Use %s filename\n" , argv[0] );
    exit( EXIT_FAILURE );
  }
  if( ( fp = fopen( argv[1], "r" ))== NULL)
  {
    //printf( "Can't open %s\n" , argv[1] );
    printf( "Unable to open file %s for reading.\n" , argv[1] );
    exit( EXIT_FAILURE );
  }
  while( ( ch=getc(fp) ) != EOF )
  {
    if( isalpha( ch ) )
    {
      characterCountCh ++;
    }
    if( ispunct( ch ) )
    {
      punctuationCh++;
    }
    if( isspace (ch) )
    {
      whiteSpaceCh++;
    }
    if( islower(ch) )
    {
      lowercaseCh++;
    }
    if ( isupper(ch) )
    {
      uppercaseCh++;
    }

    count++;
  }
  fclose( fp );
  //printf( "File %s has %lu letters\n" , argv[1], count );
  printf( "The file %s has %lu letters, %lu punctuation characters and %lu whitespace characters.\n", argv[1], characterCountCh, punctuationCh, whiteSpaceCh );
  printf( "Of the %lu letters, %lu are lowercase, and %lu are uppercase.\n", characterCountCh, lowercaseCh, uppercaseCh );

  
  return 0;
  
}


