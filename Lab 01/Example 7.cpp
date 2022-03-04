#include <iostream>
using namespace std;

enum direction {East=11, West=22, North=33, South=44};
int main(){
direction dir;
dir = South;
cout<<dir;
return 0;
}