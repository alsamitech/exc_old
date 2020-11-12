#include <stdio.h>

extern void _squit();

int main(){
  printf("test");
  fflush(stdout);
  _squit();
  printf("ok");
}