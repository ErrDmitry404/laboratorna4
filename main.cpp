#include "class.h"
#include <iostream>

int main() {
  Tourism_tour first("Podorozhuyko", 60, 350, 12314, 123, "Hungary", 15);
  first.country_city = "Hungary";
  first.sale = 15 ;
  first.get_inf();

  Tourism_tour second("Sea Pearl", 69, 270, 12942, 152,"China",10);
    second.country_city = "China";
  second.sale = 10 ;
  second.get_inf();

  Tourism_tour third("Lviv Travel", 59, 230, 12842, 195, "Spain", 20);
  third.country_city = "Spain";
  third.sale = 20 ;
  third.get_inf();
}
