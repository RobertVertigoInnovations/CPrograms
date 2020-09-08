#include <stdio.h>
int starFunction( int holder[], int *count);

int main(void) {
  int number =0;
  int z = 0 ;
  int divisor = 2;
  int count = 0; 
  int holder[100];
  printf("Enter some numbers\n");
  scanf("%d",&number);
  printf("prime factor of %d\n",number);
    while(number != 1){
      if(number%divisor==0){
        do{
          holder[z] = divisor;
          z++;
          count++;   
          number = number/divisor;
        }
        while (number%divisor==0);
      }divisor++;
    }
    starFunction(holder,&count);

}

int starFunction( int holder[], int *count)
{

for(int a = 0 ; a < *count ;a++){
   printf("%d ",holder[a]);
    if(a+1<*count){
      printf("*");
    }
  }
  return 0;
}