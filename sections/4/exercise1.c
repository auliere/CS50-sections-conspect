#include <stdio.h>
int main(void)
{
  FILE* file = fopen("hello", "w");
  if (file != NULL)
  {
    fprintf(file, "Hello, world!");
    fclose(file);
  }
}