#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

template < class T , class U >
T f ( U x )
{
	T k;
	k = x + 1 ;
	return k;
}
main()
{
	int a = 1;
	char ch = 'A';
	double d = 97.3;
	
	cout<< f < int , int > (a) <<endl;
	cout<< f < int , char > (ch) <<endl;
	cout<< f < char , char > (ch) <<endl;
	cout<< f < char , double > (d) <<endl;
}
