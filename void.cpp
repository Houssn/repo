#include<iostream>
using namespace std;


void f(int, int = 12) ;
main ()
{
int n = 10 ; int p = 20 ;
f(n, p) ;
f(n) ;
}


