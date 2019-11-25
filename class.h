#pragma once
#ifndef CLASS_H
#define CLASS_H
#include <string>
#include <iostream>
using namespace std;

class Tourism_tour {

private:
  string company;
  int duration;
  int price;

protected:
  int iDcountry;
  int ammount;

public:
  string country_city;
  int sale;

  Tourism_tour();

  Tourism_tour(string Tourismtourcompany, int Tourism_tourduration, int Tourism_tourprice, int Tourism_touriDcountry, int Tourism_tourammount, string country_city, int Tourismtoursale);

  string getCompany();

  int getDuration();

  int getPrice();

  int getIDcountry();

  int getAmmount();

  string getCountry_city();

  int getSale();


  void get_inf();


  ~Tourism_tour();
};

#endif /* CLASS_H*/
