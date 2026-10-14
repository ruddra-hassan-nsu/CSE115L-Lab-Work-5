#include <stdio.h>
#define VAT_RATE 1.15

double add_vat(double price);
void print_boxed(double value);

int main(void)
{
  print_boxed(add_vat(100.0));
  print_boxed(add_vat(200.0));

  return (0);
}

double add_vat(double price)
{
  return price * VAT_RATE;
}

void print_boxed(double value)
{
  printf("***************\n");
  printf("* %10.2f  *\n", value);
  printf("***************\n");
}
