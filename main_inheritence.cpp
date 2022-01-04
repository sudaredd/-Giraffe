#include <iostream>
#include <cmath>

using namespace std;

class Chef {
    public:
        void makeChicken() {
            cout << "The chef makes chicken" << endl;
        }
        void makeSals() {
            cout << "The chef makes salad" << endl;
        }
        void makeSecialDish() {
            cout << "The chef makes bbq chicken" << endl;
        }

};

class ItalianChef : public Chef {
public:
    void makePata() {
        cout << "Italin chef makes pasta" << endl;
    }
    void makeSecialDish() {
            cout << "The chef makes Chicken Parmesan" << endl;
        }
};
int main1()
{

    Chef chef;

    chef.makeChicken();

    ItalianChef italinChef;

    italinChef.makeChicken();

    italinChef.makePata();

    italinChef.makeSecialDish();

    return 0;

}

