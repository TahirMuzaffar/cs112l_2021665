#include <iostream>
using namespace std;

struct Student
{
int rollno, age;
char name[80];
float marks;
};
int main()
{
// declare two variables of the new type
Student s1, s3;
//accessing of data members
cin >> s1.rollno >> s1.age >> s1.name >> s1.marks;
cout << s1.rollno << s1.age << s1.name << s1.marks;
//initialization of structure variable
Student s2 = {100, 17, "Aniket", 92};
cout << s2.rollno << s2.age << s2.name << s2.marks;
//structure variable in assignment statement
s3 = s2;
cout << s3.rollno << s3.age << s3.name << s3.marks;
return 0;
}