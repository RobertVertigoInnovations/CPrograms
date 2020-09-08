#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char * argv [] )
  {
      if (argc != 2) {
    printf("\n    There must be exactly 2 command-line arguments:  argv[0] & perimeter.\n\n");
    return 0;
          
      }
     unsigned long int perimeter = strtoul ( argv[1], NULL, 10 );

    
     int myBool=0;
     int A[1000];
     int i;
     int length=0;
     int B[1000];
     int C[1000];
     int D[1000];
     int o=0;

 

    printf("\n");
    printf("    ==  ===========================================================================================\n");
    printf("    ==  For those right triangles that have perimeter equal to %lu, this program finds the possible\n",perimeter);
    printf("    ==  integer lengths of that triangle's sides. In other words, this program finds the\n");
    printf("    ==  Pythagorean triples corresponding to the given perimeter, %lu.\n",perimeter);
    printf("    ==\n");
    printf("    ==  The components of each Pythagorean triple (a,b,c) are ordered such that a < b < c.\n");
    printf("    ==\n");
    printf("    ==  For the given perimeter, the Pythagorean triples are listed in lexicographic order.\n");
    printf("    ==\n");
    printf("    ==  The program indicates which Pythagorean triples are primitive (i.e., which Pythagorean\n");
    printf("    ==  triples have 1 as their greatest common divisor).\n");
    printf("    ==\n");
    printf("    ==  For each Pythagorean triple that is not primitive, that triple is also written as\n");
    printf("    ==  the product of the GCD and a primitive triple.\n");
    printf("    ==  ===========================================================================================\n\n");

  unsigned long int a, b, c,gcd ;
  for ( a = 1 ; a < perimeter ; a ++ ) // guarantees 0 < a
    {
    for ( b = (a+1) ; b < perimeter ; b ++ ) // guarantees a < b
      {
      if ( a + b < perimeter ) // guarantees c > 0
        {
        c = perimeter - b - a ;
        
        if((a+b + c)==perimeter)
          {
            
            if ( b < c ) // guarantees 0 < a < b < c
            {
                if((a*a)+(b*b)==c*c)
                {
                    
					for(int i=1;i<=a && i<=b && i<=c; i++)
						{
						if(a%i==0 && b%i==0 && c%i ==0)
    						{
    						    gcd=i;
    			
    						   
    			
    		
    							
    						
    						}
						    
						}
						myBool=1;
			
						int i;
						int o;
						A[i]=a;
						B[i]=b;
						C[i]=c;
						D[i]=gcd;
						length++;
						i++;
						o++;
			    

                }
                
            }
            
          }
          
        }
        
      }
    }

  
  
    

    if(!myBool)
    {
          printf("    -----------------------------------------------------------------------------------------------\n");
          printf("    No Pythagorean triples were found for the given perimeter, %lu.\n",perimeter);
          printf("    -----------------------------------------------------------------------------------------------\n\n");

      }
      while(myBool)
      { 
          
          printf("    Perimeter = %lu\n",perimeter);
          printf("                           a        b        c       Factorization\n");
          printf("                        -------  -------  -------    -------------\n");
          for(int j = 0; j<length;j++)
          {
              if(C[i] == C[i])
          {
              printf("%31d%9d%9d    Primitive!\n", A[i], B[i], C[i] ) ;
              ;
              for(int i=1;i<=A[i] && i<=B[i] && i<=C[i]; i++)
              {
                  if(A[i]%i==0 && B[i]%i==0 && C[i]%i ==0)
                  {
                 
                      printf("                             %d%9d%9d    %d × (%d,%d,%d)\n", A[i], B[i], C[i],D[i],A[i]/D[i],B[i]/D[i],C[i]/D[i] ) ;
                      //printf("%ld x (%ld,%ld,%ld)\n\n",gcd,A[i]/gcd,B[i]/gcd,C[i]/gcd);
                      
                  }
              }
              printf("\n");
              
          } break;
          
      }
      break;
  }
  }
  


 
      
    
  
 

