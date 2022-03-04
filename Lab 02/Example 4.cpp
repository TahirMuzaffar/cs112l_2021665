#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;

void binary( int u)
{
cout << setw(5) << u << ": ";
cout << bitset<16>((int)u);
cout << "\n";
}
int main()
{
binary(5);
binary(55);
binary(255);
binary(4555);
binary(14555);
system("PAUSE");
return 0;
}