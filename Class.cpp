#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    string firstname, lastname;
    int age;

    person(string fn, string ln, int a) : firstname(fn), lastname(ln), age(a) {};

    void getFullname()
    {
        cout << this->firstname + " " + this->lastname << endl;
    }

    void getdetails()
    {
        cout << this->firstname << "," << this->lastname << "," << this->age << endl;
    }
};

int main()
{
    string fn, ln;
    int a;

    getline(cin, fn);
    getline(cin, ln);
    cin >> a;

    person p1(fn, ln, a);

    p1.getFullname();
    p1.getdetails();
}