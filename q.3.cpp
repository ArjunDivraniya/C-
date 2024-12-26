#include <iostream>
using namespace std;

void side (int a ,int b,int c){
	if(a==b==c){
		cout << " triangle is equilateral";
	}else if (a==b ||b==c || a==c){
		cout <<" triangle is isosceles";
	}else{
		cout << "scalene";
	}
}
int main() 
{
	int a,b,c;
   cout << "Enter 3 Sides"<< endl;
   cin >> a;
   cin >> b;
   cin >> c;
   side (a,b,c);
}
