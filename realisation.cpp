#include "class.h"
using namespace std;

Tourism_tour::Tourism_tour() {
  company;
  duration;
  price;
  iDcountry;
  ammount;
  country_city;
  sale;
}

Tourism_tour::Tourism_tour(string Tourism_tourcompany, int Tourism_tourduration, int Tourism_tourprice, int Tourism_touriDcountry, int Tourism_tourammount, string Tourism_tourcountry_city, int Tourism_toursale) {
  company = Tourism_tourcompany;
  duration = Tourism_tourduration;
  price = Tourism_tourprice;
  iDcountry = Tourism_touriDcountry;
  ammount = Tourism_tourammount;
  country_city = Tourism_tourcountry_city;
  sale = Tourism_toursale;

}
string Tourism_tour::getCompany() {
  return company;
}
int Tourism_tour::getDuration() {
  return duration;
}
int Tourism_tour::getPrice() {
  return price;
}
int Tourism_tour::getIDcountry() {
  return iDcountry;
}
int Tourism_tour::getAmmount() {
  return ammount;
}
string Tourism_tour::getCountry_city() {
  return country_city;
}
int Tourism_tour::getSale() {
  return sale;
}
void Tourism_tour::get_inf() {
  cout << "\n Company is: " << "\"" << getCompany() << "\"" << ", Duration for: " << getDuration() << " price is: " << getPrice() << " iDcounty is: " << getIDcountry() << " Days ammount: " << getAmmount() << "City is : " << getCountry_city() << "Sale in procent is : " << getSale() << "  \n";
}
Tourism_tour::~Tourism_tour() {
  cout << "The End!" << endl;
}
