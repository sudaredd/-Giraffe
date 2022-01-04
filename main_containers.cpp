#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <unordered_map>

using namespace std;

struct Entry
{
    string name;
    int number;
};


void print_book(const vector<Entry>& book)
{
    for (int i = 0; i!=book.size(); ++i)
        cout << book[i].name << ":" << book[i].number << endl;
}

int get_number(const string& s, const list<Entry>& list)
{

    for (const auto& x: list)
    {
        if(x.name == s)
        {
            return x.number;
        }
    }
    return -1;
}

int get_number_iterator(const string& s, const list<Entry>& list)
{

    for (auto p=list.begin(); p!=list.end(); ++p)
    {
        if(p->name == s)
        {
            return p->number;
        }
    }
    return -2;
}

map<string,int> phone_book_map()
{
    map<string,int> phone_book_map
    {
        { "David B", 8567676 },
        { "Abdo M", 564545987 },
        { "Raja P", 7675665 },
    };
    return phone_book_map;

}

int get_number_map(const string& s, map<string,int>& m)
{
    return m[s];
}

unordered_map<string,int> phone_book_unorder_map()
{
    unordered_map<string,int> phone_book_unorder_map
    {
        { "Divya K", 8567676 },
        { "Bhavya K", 8567676 },
        { "Pras K", 564545987 },
        { "Sudar K", 7675665 },
    };
    return phone_book_unorder_map;
}

int get_number_unordered_map(const string& s, unordered_map<string,int>& m)
{
    return m[s];
}



int main()
{
    vector<Entry> phone_book =
    {
        {"David Hume",123456},
        {"Karl Popper",234567},
        {"Bertrand Ar thur William Russell",345678}
    };

    list<Entry> phone_book_list =
    {
        {"David Hume",123456},
        {"Karl Popper",234567},
        {"Bertrand Ar thur William Russell",345678}
    };

    print_book(phone_book);

    cout << "phone number for David Hume " << get_number("David Hume", phone_book_list) << endl;
    cout << "phone number for David Home " << get_number("David Home", phone_book_list) << endl;

    cout << "phone number iterator for David Hume " << get_number_iterator("David Hume", phone_book_list) << endl;
    cout << "phone number iterator for David Home " << get_number_iterator("David Home", phone_book_list) << endl;

    map<string, int> m = phone_book_map();

    cout << "phone number from map for David B:" << get_number_map("David B", m) << endl;
    cout << "phone number from map for Abdo m:" << get_number_map("Abdo M", m) << endl;
    cout << "phone number from map for Raja P:" << get_number_map("Raja P", m) << endl;
    cout << "phone number from map for Raja P:" << get_number_map("Sudar K", m) << endl;

    unordered_map<string,int> un_map = phone_book_unorder_map();

    cout << "phone number from un_map for Sudar K:" << get_number_unordered_map("Sudar K", un_map) << endl;
    cout << "phone number from un_map for Bhavya K:" << get_number_unordered_map("Bhavya K", un_map) << endl;
    cout << "phone number from un_map for Divya K:" << get_number_unordered_map("Divya K", un_map) << endl;
    cout << "phone number from un_map for Pras K:" << get_number_unordered_map("Pras K", un_map) << endl;


    return 0;
}



