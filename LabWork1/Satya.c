#include <stdio.h>
#include <stdlib.h>
void fun_int(int(a), int(b))
{
  int area, perimeter;
  area = (a * b);
  perimeter = 2 * (a + b);
  printf("Area = %d and Perimeter = %d\n", area, perimeter);
}
void fun_float(float(a), float(b))
{
  float area, perimeter;
  area = (a * b);
  perimeter = 2 * (a + b);
  printf("Area = %f and Perimeter = %f\n", area, perimeter);
}

int check(char *str)
{
  int i = 0;
  while (str[i] != '\0')
  {
    if (str[i] == '.')
    {
      break;
      return 1;
    }
    i++;
  }
}

void main()
{
  char inp_1[10], inp_2[10];
  int x, y;
  float m, n;
  printf("Enter length: ");
  scanf("%s", inp_1);
  printf("Enter Breadth: ");
  scanf("%s", inp_2);
  if (check(inp_1) || check(inp_2))
  {
    m = atof(inp_1);
    n = atof(inp_2);
    fun_float(m, n);
  }
  else
  {
    x = atoi(inp_1);
    y = atoi(inp_2);
    fun_int(x, y);
  }
}
