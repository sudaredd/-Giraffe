#include <iostream>
#include <cmath>

using namespace std;

int main()
{

int secretNum = 7;
int guess;
int guessLimit = 3;
int guessCount = 0;
bool outOfGuesssess = false;

while ( secretNum != guess && !outOfGuesssess) {
    if(guessCount < guessLimit) {
         cout << "Enter a guess:";
         cin >> guess;
         guessCount++;
    } else {
        outOfGuesssess = true;
    }

}
if(outOfGuesssess)
    cout << "You Lose!";
else
    cout << "You Win!";

//while loop
/*
    int index = 1;

    while(index <= 10) {
        cout << index++ << endl;
    }

    do {
        cout << "in do while ::" << index++ << endl;
    } while (index <=10);
*/
    return 0;

}

