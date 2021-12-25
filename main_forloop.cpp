#include <iostream>
#include <cmath>

using namespace std;

int power (int base, int power) {
    int result = 1;
    for(int i=0; i<power; i++) {
        result *= base;
    }
    return result;
}
int main1()
{
    cout << power(3, 4) << endl;

    for (int index = 1; index <=5; index++) {
        cout << index << endl;
    }
    cout << "---------------" <<endl;

    int nums[] = {1, 2, 7, 3, 5};

    cout << "size of array::" << sizeof(nums)/sizeof(nums[0]) << endl;
    for(int i=0; i < sizeof(nums)/sizeof(nums[0]); i++) {
        cout << nums[i] << endl;
    }
    return 0;

}

