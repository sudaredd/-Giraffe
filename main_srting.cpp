#include <iostream>

using namespace std;

int main1()
{
    string phrase = "Giraffe Academy";
    string phraseSub = phrase.substr(8, 3);

    cout << phrase.length() << endl;
    cout << phrase[2] << endl;
    phrase[0] = 'B';
    cout << phrase << endl;
    phrase[0] = 'G';
    cout << phrase.find("Academy", 0) << endl;

    cout << phraseSub << endl;

    return 0;
}
