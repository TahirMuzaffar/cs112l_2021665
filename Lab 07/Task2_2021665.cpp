#include <iostream>
using namespace std;

class matrixType {
    private:
        int row, col;
        int **mat;
        friend ostream &operator<<(ostream &op, matrixType &m);
    public:
        matrixType(int r = 0, int c = 0) {
            if (r == 0 || c == 0) {
                cout << "Enter the numbers of rows: ";
                cin >> row;
                cout << "Enter the number of columns: ";
                cin >> col;
            }
            else {
                row = r;
                col = c;
            }
            
            mat = new int *[row];
            for (int i = 0; i < row; i++) {
                mat[i] = new int[col];
            }
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < col; j++) {
                    mat[i][j] = 0;
                }
            }
        }
        ~matrixType(){};

        void newArr() {
            cout << "Enter elements into the array: " << endl;
            for (int i = 0; i < row; i++) {
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < col; j++) {
                        cin >> mat[i][j];
                    }
                }
            }
        }

        matrixType operator+(matrixType &m) {
            matrixType temp(m.row, m.col);
            if (m.row != row && m.col != col) {
                cout << "The number of rows and/or columns of both matrices should be equal." << endl;
                return *this;
            }
            else {
                for (int i = 0; i < temp.row; i++) {
                    for (int j = 0; j < temp.col; j++) {
                        temp.mat[i][j] = m.mat[i][j] + mat[i][j];
                    }
                }
                return temp;
            }
        }

        matrixType operator-(matrixType &m) {
            matrixType temp(m.row, m.col);
            if (m.row != row && m.col != col) {
                cout << "The number of rows and/or columns of both matrices should be equal." << endl;
                return *this;
            }
            else {
                for (int i = 0; i < temp.row; i++) {
                    for (int j = 0; j < temp.col; j++) {
                        temp.mat[i][j] = m.mat[i][j] - mat[i][j];
                    }
                }
                return temp;
            }  
        }

        matrixType operator*(matrixType &m) {
            matrixType temp(row, m.col);
            if (row != m.col) {
                return *this;
            }
            else {
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < m.col; j++) {
                        for (int k = 0; k < col; k++) {
                            temp.mat[i][j] += mat[i][k] * m.mat[k][j];
                        }
                    }
                }
            return temp;
            } 
        }
        friend ostream &operator<<(ostream &op, matrixType &m) {
            for (int i = 0; i < m.row; i++) {
                for (int j = 0; j < m.col; j++) {
                    op << m.mat[i][j] << " ";
                }
                op << endl;
            }
            return op;
        }
};

int main() {
    int option = 0;
    matrixType m1, m2;
    m1.newArr();
    m2.newArr();
    while (option != 4) {
        cout << "Select one of following options: " << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Exit" << endl;
        cin >> option;
        switch (option) {
            case 1:
            cout << m1 + m2;
            break;
            case 2:
            cout << m1 - m2;
            break;
            case 3:
            cout << m1 * m2;
            break;
            case 4:
            cout << "Exiting..." << endl;
            break;
            default:
            cout << "Invalid option. Please try again." << endl;
        }
    }
}