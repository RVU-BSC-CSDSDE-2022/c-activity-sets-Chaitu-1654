#i
int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main() {
  int a,b,c,l;
  a = input();
  b = input();
  c = input();
  compare(a,b,c,&1);
  output(a,b,c,l);
  }

int input() {
  int x;
  printf("enter the number\n");
  scanf("d", &x);
  return(x);
  }
vold compare( int a, int b, int c, int *largest){
  if(a>b)
  {
  if (a>c){ largest = a;}
  else{ largest = c;}
    }
  else
    