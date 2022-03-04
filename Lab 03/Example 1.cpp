#include<iostream>
using namespace std;

int getNum1() {
return 10;
}
int getNum2() {
return 20;
}
int getResult() {
int num1 = getNum1();
int num2 = getNum2();
return num1 + num2;
}
int main() {
int result = getResult();
cout<<result;
}