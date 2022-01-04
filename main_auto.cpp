#include <iostream>
#include <string>
#include <array>

using namespace std;

int sqre(auto y) {
    return y * y;
}

int main1()
{
    auto b = true;
    auto ch = 'X';
    auto i = 123;
    auto d = 1.2;
    auto z = sqre(5);

    cout << "boolean " << b << endl;
    cout << "char " << ch << endl;
    cout << "int " << i << endl;
    cout << "double " << d << endl;
    cout << "sqre " << z << endl;

    const int c = 10;

    //cout << c++;

    /*
array<int, 4> expenses = { 1, 2, 3, 4};

for (int i=0; i<expenses.size(); i++) {
    cout << expenses[i] << endl;
}

for (auto&i : expenses) {
    cout << i << endl;
}
*/


return 0;
}

