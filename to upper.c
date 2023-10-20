
#include<stdio.h>
int main()
{
  int upper,lower;
  printf("please enter a lowercase letter");
  scanf("%c",&lower);
  upper=toupper(lower);
  printf("%c",upper);
}
