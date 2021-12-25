#include <iostream>
#include <cmath>

using namespace std;

class Movie {
    private:
        string title;
        string director;
        string rating;

    public:

        Movie( string aTitle, string aDirector, string aRating) {
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }
        void setRating (string aRating) {
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13") {
                rating = aRating;
            } else {
                rating = "NR";
            }


        }
        string getRating() {

            return rating;
        }

};

class Student {
    public:
        string name;
        string major;
        double gpa;
        Student(string aName, string aMajor, double aGpa) {
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool hasHonors() {

            return gpa >= 3.5;

        }

};

class Book {

    public:
        string title;
        string author;
        int pages;

        Book() {
        //    title = "No title";
        //    author = "No author";
        }
        Book(string aTitle, string aAuthor, int aPages) {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
            cout << "creating object for " << aTitle << endl;
        }



};

int main()
{

    Movie avengers ("Avengers", "Joss Whedon", "PG-13");
    avengers.setRating("GGGG");

    cout << avengers.getRating() << endl;
/*
    Student student1 ("Jim", "Business", 2.4);
    Student student2 ("Pam", "Art", 3.6);

    cout << student1.hasHonors() << endl;
    cout << student2.hasHonors() << endl;
    */
/*
    Book book1("Harry Potter", "JK Rowling", 500);
    Book book2("Lord of the Rings", "Tolkein", 600);
    Book book3;

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;
    cout << "--------------" << endl;

    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;

    cout << "--------------" << endl;

    cout << book3.title << endl;
    cout << book3.author << endl;
    cout << "Number of pages: " << book3.pages << endl;
*/
    return 0;

}

