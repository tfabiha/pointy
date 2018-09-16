// T. Fabiha
// Systems1 pd4
// Work 02: Get to the point.
// 2018-09-17

# include <stdio.h>
# include <stdlib.h>

int main()
{
  unsigned int x = 2200000000;
  char *ip;
  ip = &x;

  printf("This is the hex value my pointer points to %x \n", *ip);
  printf("\n");

  for (int i = 0; i < sizeof(x); i++)
  {
    printf("Byte %d is %hhx \n", i, *ip);
    ip += 1;
  }

  printf("\n");
  ip = &x;

  for (int i = 0; i < sizeof(x); i++)
  {
    *ip += 1;
    printf("Byte %d after increment by 1 is %hhx \n", i, *ip);
    ip += 1;
  }

  printf("\n");
  ip = &x;

  for (int i = 0; i < sizeof(x); i++)
  {
    *ip += 16;
    printf("Byte %d after increment by 16 is %hhx \n", i, *ip);
    ip += 1;
  }
}
