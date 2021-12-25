#include <iostream>
#include <cmath>

using namespace std;

int getMax(int num1, int num2) {
    return num1 > num2 ? num1 : num2;
}

int main()
{

    cout << getMax(5, 8) << endl;

    bool isMale = true;
    bool isTall = false;

    if(isMale && isTall) {
        cout << "You are a tall male";
    } else if(isMale) {
        cout << "You are a male";
    } else {
        cout << "You are not male";
    }

}

