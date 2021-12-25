#include <iostream>
#include <cmath>

using namespace std;

void sayHi(string name, int age);
double cube (double num) {
    return num * num * num;
}
int main()
{


sayHi("Darsan", 23);
sayHi("Sudarsan", 43);
sayHi("Kasireddy", 60);

    cout << cube(3.1) << endl;

// Arrays
/*
    int luckyNums[] = {4, 8, 15, 23, 42};

    luckyNums[0] = 29;

    cout << luckyNums[0] << endl;
*/

    return 0;
}

void sayHi(string name, int age) {
    cout << "Hello " << name << " you're " << age << " years old" << endl;
}
