#include<stdio.h>
int input()
{
  int num;
  printf("enter a number\n");
  scanf("%d",&num);
  return num;
}

int cmp(int a, int b, int c)
{
  if((a>b)&&(a>c))
  return a; else if (b>c)
  return b;
  else
  return c;
}

void output(int a,int b,int c,int largest)
{
  printf("%d is the largest number\n",largest);
}

int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest=cmp(a,b,c);
  output(a,b,c,largest);
  return 0;
}