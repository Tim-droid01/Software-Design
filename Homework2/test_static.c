/* File: test_static.c */
#include "matrix_static.h"

int main() 
{
  static T data[] = {9,20,4,11};
  matrix  a,b;
  a = create_initvals(2,2,data);
  b = create_empty(2,2);
  equate(&a,&b);
  printf("\n Static \nMatrix a:");
  matrix_print(a);
  printf("\n Matrix b:");
  matrix_print(b);
  printf("\n a+b:");
  matrix_print(add(a,b));
	
 printf("\n Interchanged b:");
        matrix_print(flip(b));

  printf("\n a-b:");
	matrix_print(subtract(a,b));

  printf("\n negate b:");
        matrix_print(negate(b));

  printf("\n a*b:");
        matrix_print(multiply(a,b));
}
