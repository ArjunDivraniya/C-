#include <iostream>
using namespace std;

void check(int number){
	if(number>0){
		cout << "Positive";
	}else if (number <0){
		cout << "Nagative";
	}else{
		cout << "Number is Zero";
	}
}
int main() 
{
  int number;
  cout <<"Enter Number ";
  cin >> number;
  
  check(number);
}
