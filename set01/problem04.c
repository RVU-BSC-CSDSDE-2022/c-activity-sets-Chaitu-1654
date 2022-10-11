#include <stdio.h> 
int sum_func( int x,int y);

int main(void) {
  int x,y,sum;
  printf("Enter two integers: ");
  scanf("%d %d", &x, &y);
  sum = x + y;
  printf("%d + %d = %d", x, y, sum);
return 0;
}
