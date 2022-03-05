/* File: test_dynamic.c */
#include "matrix_dynamic.h"

int main() 
{
  static T data[] = {5,10,3,9};
  matrix  a,b;
  a = create_initvals(2,2,data);
  b = create_empty(2,2);
  equate(&a,&b);
  printf("\n Dynamic \nMatrix a:");
  matrix_print(a);
  printf("\n Matrix b:");
  matrix_print(b);
  printf("\n a+b:");
  matrix_print(add(a,b));
	
  printf("\n Interchanged a:");
	matrix_print(flip(a));

 printf("\n a-b:");
        matrix_print(subtract(a,b));

  printf("\n negate a:");
        matrix_print(negate(a));

  printf("\n a*b:");
        matrix_print(multiply(a,b));
}
