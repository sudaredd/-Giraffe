#include <iostream>
#include <cmath>

using namespace std;


int main1()
{
   int age = 21;
   int *pAge = &age;

   double gpa = 3.25;
   double *pGpa = &gpa;

   string name = "Darsan";

   cout << &age << endl;
   cout << pAge << endl;
   cout << *pAge << endl;
   cout << &gpa << endl;
   cout << &name << endl;

    return 0;

}

