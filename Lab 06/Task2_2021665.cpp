#include <iostream>
#include <string>
using namespace std;


class Officer {
private:
    int id;
    string name;
    string rank;
    static int count;
public:

    Officer () {
        id = 0;
        name = " ";
        rank = " ";
    };

    void getter () {
        cout << "Enter ID of the officer: ";
        cin >> id;
        cout << "Enter name of the officer: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter rank of the officer: ";
        cin >> rank;
        cout << endl;
    }

    ~Officer () {};

    static int getCount () {
        return count;
    }

    void check () {
        int temp = id, lastDig, palin = 0;
        while (temp > 0) {
            lastDig = temp % 10;
            palin = (palin * 10) + lastDig;
            temp /= 10;
        } 
        if (id == palin) {
            cout << "This officer is not allowed to enter the restricted area." << endl;
        }
        else {
            cout << "This officer is allowed to enter the restricted area." << endl;
            count++;
        }
    }
};

int Officer::count = 0;

void menu() {
    cout << "-------------------------------" << endl;
    cout << "Please select your desired option: " << endl;
    cout << "1. Enter ID of officer" << endl;
    cout << "2. Get total number of officers" << endl;
    cout << "3. Exit" << endl;
    cout << "-------------------------------" << endl;
}

int main()
{
    Officer o;
    int option = 0;
    
    while (option != 3) {
        menu();
        cin >> option;

        switch (option) {
            case 1:
            o.getter();
            o.check();
            break;
            case 2:
            cout << "Total number of officers in the area: " << o.getCount() << endl;
            break;
            case 3:
            cout << "Exiting..." << endl;
            break;
            default:
            cout << "Invalid option selected. Please try again." << endl;
            break;
        }
    }
}

