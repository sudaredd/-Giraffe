#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

bool has_c1(const string& s, char c) // does s contain the character c?
{
    return find(s.begin(),s.end(),c)!=s.end();
}

vector<string::iterator> find_all(string& s, char c) {
    vector<string::iterator> res;
    for(auto p = s.begin(); p!= s.end(); p++) {
        if(*p == c)
            res.push_back(p);
    }
    return res;
}

int main()
{
    cout << has_c1("ABCDE", 'D') << "\n";
    cout << has_c1("ABCDE", 'G') << "\n";

    string m{"Mary had a little lamb"};
    for(auto p : find_all(m, 'a')) {
        if(*p!='a')
            cerr << "a bug \n";
        else
            cout << "after find all " << *p << endl;
            cout << "after find all " << &p << endl;
    }
    return 0;
}



