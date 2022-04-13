#include <iostream>
#include <string>
using namespace std;

class Person {
    private:
        string user;
        int id;
        static int count;
        friend class Date;
    public:
        Person () {
            user = "";
            id = 0;
            count++;
        }
        ~Person() {}

        friend ostream& operator<<(ostream& op, Person &p) {
            op << "Person No. " << p.count << " Data" << endl;
            op << "Enter Name and ID: ";
            return op;
        }

        friend istream& operator>> (istream& i, Person &p) {
            i >> p.user >> p.id;
            return i;
        }
};


int Person::count = 0;

class Date {
    private:
        int year, month, day;
        friend class Person;
    public:
        Date () {
            year = 0;
            month = 0;
            day = 0;
        }
        ~Date () {}

        friend ostream& operator<<(ostream& op, Date &d) {
            op << "Enter joining date (yyyy mm dd): ";
            return op;
        }

        friend istream& operator>>(istream& i, Date &d) {
            i >> d.year >> d.month >> d.day;
            return i;
        }

        bool operator > (Date d) {
            if (year > d.year) {
                if (month > d.month) {
                    if (day > d.day) {
                        return false;
                    }
                    else {
                        return true;
                    }
                }
                else {
                    return true;
                }
            }
            else {
                    return true;
                }
        }

        void print(Date d, Person p1, Person p2) {
            bool check = *this > d;
            if (check) {
                cout << p2.user << " is senior to " << p1.user << " because " << d.year << "-" << d.month << "-" << d.day << " is earlier than " << year << "-" << month << "-" << day << "." << endl;
            }
            else {
                cout << p1.user << " is senior to " << p2.user << " because " << year << "-" << month << "-" << day << " is earlier than " << d.year << "-" << d.month << "-" << d.day << "."  << endl;
            }
        }
};

int main()
{
    Person p1;
    cout << p1;
    cin >> p1;
    Date d1;
    cout << d1;
    cin >> d1;
    Person p2;
    cout << p2;
    cin >> p2;
    Date d2;
    cout << d2;
    cin >> d2;
    d1.print(d2, p1, p2);
}
