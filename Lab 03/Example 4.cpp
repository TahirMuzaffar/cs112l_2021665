#include<iostream>
using namespace std;

int main()
{
int max = 5; // no longer const
int* a = new int[max]; // allocated on heap
int n = max;
char check;
//--- Read into the array
cout<<"Enter 5 values: "<<endl;
for(int i= 0; i<max; i++)
cin>>a[i];
do{
cout<<endl<<"Wanna enter more values??(y/n) ";
cin>>check;
if (check == 'y' || check == 'Y') {
max = max +1; // increment in the previous size
int* temp = new int[max]; // create new bigger array.
for (int i=0; i<n; i++) {
temp[i] = a[i]; // copy values to new array.
}
delete [] a;
a = temp;
// free old array memory.
// now a points to new array.
cout<<"Enter another value. ";
cin>>a[n];
n++;
}
else break;
} while (check=='y'|| check =='Y');
//--- Write out the array etc.
cout<<endl<<”Array Values: “;
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
}