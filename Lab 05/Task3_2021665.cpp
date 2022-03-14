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

    /* int compare(string s1, string s2)
    void copy(string source, string destination)
    string concatenate(string s1, string s2)
    int searchWord(string word)
    int searchChar(char ch) */
};

int main()
{
    
}
