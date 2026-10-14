#include <stdio.h>

void print_title(void);
double get_price(void);
double calc_rate(double km, double litres);
void print_report(double rate, double litres, double price);

int main(void)
{
  double km, litres;

  print_title();

  printf("Distance travelled in km >> ");
  scanf("%lf", &km);
  printf("Litres of fuel used >> ");
  scanf("%lf", &litres);

  double price = get_price();

  double rate = calc_rate(km, litres);
  print_report(rate, litres, price);

  return (0);
}

void print_title(void)
{
  printf("CSE 115 Trip Fuel Report\n");
  printf("========================\n");
}

double get_price(void)
{
  double price;

  printf("Enter fuel price >> ");
  scanf("%lf", &price);

  return price;
}

double calc_rate(double km, double litres)
{
  return km / litres;
}

void print_report(double rate, double litres, double price)
{
  double cost = litres * price;

  printf("**************************\n");
  printf("* Rate %12.2f km/l *\n", rate);
  printf("* Fuel cost %9.2f tk *\n", price);
  printf("**************************\n");
}
