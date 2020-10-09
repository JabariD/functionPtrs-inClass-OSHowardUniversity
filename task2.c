/* IMPLEMENTED FULLY IN CODIO */

#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int exitProgram();

typedef int (*operationFunction)(int, int);

int main (void) {
	/* IMPLEMENT ME: Insert your algorithm here */
  operationFunction op[5] = {&add, &subtract, &multiply, &divide, &exitProgram};
  
  int a;
  printf("Operand 'a': ");
  scanf("%d", &a);
  
  int b;
  printf("Operand 'b': ");
  scanf("%d", &b);
  
  int operation;
  printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
  scanf("%d", &operation);
  
  operationFunction func = op[operation];
  
  int result = func(a,b);
  printf("x = %d\n", result);
  

	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract  (int a, int  b) {printf ("Subtracting 'a' and 'b'\n"); return a-b; }
int multiply (int a, int b) {printf ("Multiplying 'a' and 'b'\n"); return a*b; }
int divide  (int a, int b) {printf ("Dividing 'a' and 'b'\n"); return a/b; }
int exitProgram() {exit(0); return 0;}