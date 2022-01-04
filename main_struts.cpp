#include <iostream>
#include <string>
#include <array>

using namespace std;

struct Vector
{
    int sz;
    double* elem;
};

void vector_init(Vector& v, int s)
{
    v.elem = new double[s]; // allocate an array of s doubles
    v.sz = s;
}

double read_and_sum (int s)
{

    Vector v;
    vector_init(v, s);
    cout << "enter " << s << " numbers to sum:";

    for(int i=0; i<s; i++)
    {
        cin >> v.elem[i];
    }
    double sum = 0;
    for (int i=0; i!=s; i++)
    {
        sum += v.elem[i];
    }
    return sum;
}

int main1()
{
    cout << "total sum is::" << read_and_sum(5);
    return 0;
}

