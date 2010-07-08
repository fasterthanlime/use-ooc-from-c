#include <stdio.h>

#define OOC_FROM_C
#include <underwear.h>

int main(int argc, char **argv) {
  printf("Hi, world!\n");
  printf("%s!\n", shuffle("Hi, world"));
  return 0;
}
