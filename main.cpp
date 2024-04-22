#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "StringHashSet.h"
#include <iostream>
#include <sstream>
#include <string>
#include <assert.h>

using namespace std;

int main()
{
  StringHashSet avengers;
  avengers.put("Steve");

  avengers.put("Tony");
  avengers.put("Thor");
  avengers.put("Bruce");
  avengers.put("Natasha");
  avengers.put("Clint");
  avengers.put("Wanda");


  cout <<"find Clint?"<<avengers.find("Clint")<<endl;

   cout <<"After removing Steve\n";
   avengers.remove("Steve");

   avengers.print ();


}

