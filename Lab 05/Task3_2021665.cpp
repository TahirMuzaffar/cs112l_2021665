#include <iostream>
#include <string>
using namespace std;

class stringType {
private:
    string first, second; 
public:
    stringType () {
        first = "\0";
        second = "\0";
    }
    ~stringType(){};
    void setValues(string str1, string str2) {
        first = str1;
        second = str2;
    }

    void printValues() {
        cout << "String 1: " << first << endl;
        cout << "String 2: " << second << endl;
    }

    int maxLength() {
        int len, i = 0, j = 0; 
        while (first[i] != '\0') {
            i++;
        }
        while (second[j] != '\0') {
            j++;
        }
        if (i < j) {
            len = j;
        }
        else {
            len = i;
        }
        return len;
    }

    int compare(string s1, string s2) {
        int diff, i = 0;
        while (s1[i] != '\0' || s2[i] != '\0') {
            if (s1[i] == s2[i]) {
                diff = 0;
            }
            else if (s1[i] > s2[i]) {
                diff = 1;
                break;
            }
            else {
                diff = -1;
                break;
            }
            i++;
        }
        return diff;
    }

    void copy(string source, string destination) {
        int i = 0;
        while (source[i] != '\0') {
            destination[i] = source[i];
            i++;
        }
        destination[i] = '\0';
        cout << "The copied string is: " << destination << endl;
    }

    string concatenate(string s1, string s2) {
        return s1 + s2;
    }

    int searchWord(string word) {
        int i = 0, check = 0;
        while (first[i] != '\0' || second[i] != '\0') {
            if (first[i] == ' ') {
                string temp;
                for (int j = 0; j < i; j++) {
                    temp += first[j];
                }
                if (temp == word) {
                    check = 1;
                }
            }
            else if (second[i] == ' ') {
                string temp;
                for (int j = 0; j < i; j++) {
                    temp += second[j];
                }
                if (temp == word) {
                    check = 1;
                }
            }
            i++;
        }
        return check;
    }
     
    int searchChar(char ch) {
        int i = 0, check = 0;
        while (first[i] != '\0' || second[i] != '\0') {
            if (first[i] == ch || second[i] == ch) {
                check = 1;
                break;
            }
            i++;
        }
        return check;
    }
};

void menu() {
    cout << "----------------------------------------------" << endl;
    cout << "Please select one of the options below: " << endl;
    cout << "1. To set the strings values" << endl;
    cout << "2. To print the strings" << endl;
    cout << "3. To get the maximum length of the strings" << endl;
    cout << "4. To compare the strings" << endl;
    cout << "5. To copy strings" << endl;
    cout << "6. To concatenate the strings" << endl;
    cout << "7. To search a word in the strings" << endl;
    cout << "8. To search a character in the strings" << endl;
    cout << "9. Exit." << endl;
    cout << "----------------------------------------------" << endl;
}

int main()
{
    stringType s;
    string str1, str2, word;
    char character;
    int option = 0;

    while (option != 9) {
        menu();
        cin >> option;
        switch (option) {
            case 1:
                cout << "Enter String 1: ";
                cin.ignore();
                getline(cin, str1);
                cout << "Enter String 2: ";
                getline(cin, str2);
                s.setValues(str1, str2);
                cout << endl;
                break;
            case 2:
                s.printValues();
                break;
            case 3:
                cout << "Maximum length of the strings: " << s.maxLength() << endl;
                break;
            case 4:
                if (s.compare(str1, str2) == 1) {
                    cout << "String 1 is greater than string 2." << endl;
                }
                else if (s.compare(str1, str2) == -1) {
                    cout << "String 2 is greater than string 1." << endl;
                }
                else {
                    cout << "The strings are equal." << endl;
                }
                break;
            case 5:
                s.copy(str1, str2);
                break;
            case 6:
                cout << "The concatenated string is: " << s.concatenate(str1, str2) << endl;
                break;
            case 7:
                cout << "Enter the word you want to search: ";
                cin >> word;
                if (s.searchWord(word) == 1) {
                    cout << "Word found." << endl;
                }
                else {
                    cout << "Word not found." << endl;
                }
                break;
            case 8:
                cout << "Enter the character you want to search: ";
                cin >> character;
                if (s.searchChar(character)) {
                    cout << "Character found." << endl;
                }
                else {
                    cout << "Character not found." << endl;
                }
                break;
            case 9:
                cout << "Exiting..." << endl;
                break;
            default:
            cout << "Invalid option. Please try again." << endl;
        }
    }
}
