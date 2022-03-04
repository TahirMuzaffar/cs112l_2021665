#include <iostream>
using namespace std;

#define TABLE_SIZE 100
#define MIN(a,b) (((a)<(b)) ? a : b)
int main () {
int i, j;
i = 100;
j = 30;
cout <<"The minimum is " << MIN(i, j) << endl;
#ifndef TABLE_SIZE
#define TABLE_SIZE 100
int table[TABLE_SIZE];
#endif
#ifdef TABLE_SIZE
int table[TABLE_SIZE];
#endif
#if TABLE_SIZE>200
#undef TABLE_SIZE
#define TABLE_SIZE 200
#elif TABLE_SIZE<50
#undef TABLE_SIZE
#define TABLE_SIZE 50
#else
#undef TABLE_SIZE
#define TABLE_SIZE 100
#endif
table[TABLE_SIZE];
#if 0
/* This is commented part */
cout << MKSTR(HELLO C++) << endl;
#endif
return 0;
}