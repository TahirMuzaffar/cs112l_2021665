#include <iostream>
using namespace std;

#include<iostream.h>
union Employee
{
int Id;
char Name[25];
int Age;
long Salary;
};
void main()
{
Employee E;
cout << "\nEnter Employee Id : ";
cin >> E.Id;
cout << "Employee Id : " << E.Id;
cout << "\n\nEnter Employee Name : ";
cin >> E.Name;
cout << "Employee Name : " << E.Name;
cout << "\n\nEnter Employee Age : ";
cin >> E.Age;
cout << "Employee Age : " << E.Age;
cout << "\n\nEnter Employee Salary : ";
cin >> E.Salary;
cout << "Employee Salary : " << E.Salary;