#include <iostream>
#include <string>
using namespace std;

class Coordinator;

class Person {
private:
    string uniName;
    string compName;
    friend class Coordinator;
public:
};

class Coordinator {
private:
    string detail;
    Person p1, p2;
public:
    void getter() {
        cout << "Person 1: Enter the Competition and University name: ";
        getline(cin, detail);
        int i = 0;
        while (detail[i] != ' ') {
            p1.compName += detail[i];
            i++;
        }
        i++;
        while (detail[i] != '\0') {
            p1.uniName += detail[i];
            i++;
        }
        
        cout << "Person 2: Enter the Competition and University name: ";
        getline(cin, detail);
        i = 0;
        while (detail[i] != ' ') {
            p2.compName += detail[i];
            i++;

        }
        i++;
        while (detail[i] != '\0') {
            p2.uniName += detail[i];
            i++;
        }
    }

    void check () {
        if (p1.uniName == p2.uniName) {
            int len1 = 0, len2 = 0;
            while (p1.compName[len1] != '\0') {
                len1++;
            }
            while (p2.compName[len2] != '\0') {
                len2++;
            }
            if (len1 > len2) {
                cout << "Message from the Coordinator: Person1 and Person2 are roommates, and the room number is " << len1 << endl;
            }
            else if (len1 < len2) {
                cout << "Message from the Coordinator: Person1 and Person2 are roommates, and the room number is " << len2 << endl;
            }
            else {
                cout << "Message from the Coordinator: Person1 and Person2 are roommates, and the room number is " << len1 << endl;
            }
        }
        else {
            cout << "Message from the Coordinator: Person1 and Person2 are not roommates" << endl;
        }
    }
};
int main()
{
    Coordinator c;
    c.getter();
    c.check();
}

