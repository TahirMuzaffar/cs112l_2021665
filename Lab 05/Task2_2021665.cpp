#include <iostream>
using namespace std;

class Parity {
private:
    int size;
    int* arr = new int[size];
public:
    //functions declaration
    void Put(int);
    void Print();
    void Delete();
    int Test();
    Parity() {
        size = 0;
        for (int i = 0; i < size; i++) {
            arr[i] = 0;
        }
    }

    ~Parity() {
        delete [] arr;
    }
};

//functions definition
void Parity::Put(int num) {
    size++;
    int *temp = new int[size];
    for (int i = 0; i < size - 1; i++) {
        temp[i] = arr[i];
    }
    delete[] arr;
    arr = temp;
    arr[size - 1] = num;
}
void Parity::Print() {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void Parity::Delete() {
    if (size == 0) {
        cout << "No element to be deleted." << endl;
        return;
    }
    size--;
    int *temp = new int[size];
    for (int i = 0; i < size; i++) {
        temp[i] = arr[i];
    }
    delete[] arr;
    arr = temp;
}
int Parity::Test() {
    if ((size) % 2 == 0) {
        return 1;
    }
    else {
        return -1;
    }
}

void menu() {
    cout << "------------------------------------------------------" << endl;
    cout << "Enter one of the following options: " << endl;
    cout << "1. To add an element to the array" << endl;
    cout << "2. To delete the last element of the array" << endl;
    cout << "3. To print all the elements of the array" << endl;
    cout << "4. To check if the number of elements are even or odd" << endl;
    cout << "5. Exit" << endl;
    cout << "------------------------------------------------------" << endl;
}

int main()
{
    Parity items;
    int number, choice = 0;
    
    while (choice != 5) {
        menu();
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Enter an element to add into the array: ";
            cin >> number;
            items.Put(number);
            break;
        case 2:
            items.Delete();
            break;
        case 3:
            items.Print();
            break;
        case 4:
            if (items.Test() == 1) {
                cout << "TRUE, the elements are even." << endl;
            }
            else {
                cout << "FALSE, the elements are odd." << endl;
            }
            break;
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
        }
    }
}