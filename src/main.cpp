/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *    Description:  
 *         Author:  Dan Horgan (danhgn), danhgn@googlemail.com
 *
 * =====================================================================================
 */

#include <iostream>
#include <ginac/ginac.h>

using namespace std;
using namespace GiNaC;

int main(int argc, char *argv[])
{
   cout << "hello world" << endl;

   symbol x("x"), y("y");
   ex poly;

   for (int i=0; i<3; ++i)
      poly += factorial(i+16)*pow(x,i)*pow(y,2-i);

   cout << poly << endl;
   return 0;
}
