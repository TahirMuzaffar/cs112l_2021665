#include <iostream>
using namespace std;

class Heater {
private:
    int temp;
public:
    Heater () {
        temp = 15;
        cout << "Default temperature: " << temp << endl;
    }
    ~Heater(){};
    
    void Warmer() {
        temp += 5;
    }
    void Cooler() {
        temp -= 5;
    }
    int tempAccess() {
        return temp;
    }
};

void menu() {
    cout << "Enter one of the options below: " << endl;
    cout << "1. If the temperature is warmer" << endl;
    cout << "2. If the temperature is cooler" << endl;
    cout << "3. Exit" << endl;
}
int main()
{
    Heater temperature;
    int option = 0;

    while (option != 3) {
        menu();
        cin >> option;
        switch (option) {
        case 1:
            temperature.Warmer();
            cout << "Updated temperature: " << temperature.tempAccess() << endl;
            break;
        case 2:
            temperature.Cooler();
            cout << "Update temperature: " << temperature.tempAccess() << endl;
            break;
        case 3:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
            break;
        }
    }
}

