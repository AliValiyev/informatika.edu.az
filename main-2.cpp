//cpp
/*
LANG: C++14
TASK: test
*/
//Created on Tue Apr 25 19:01:27 2017
/****Author: alivaliyev****/



#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;
  
int main()
{
double x1,s,x2,y1,y2,f,g,a,b;
cin >> x1>> y1>> x2>> y2;
f = x1 * x2 + y1 * y2;
g = sqrt(x1 * x1 + y1* y1);
a = sqrt(x2 * x2 + y2 * y2);
if ( g > 0 && a > 1)
b = f / (g * a);
s = acos(b);
printf("%.5f",s);
return 0;
}