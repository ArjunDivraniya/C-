#include <iostream>
#include <string>
using namespace std;

void login (string name,int pass){
	if(name=="admin" && pass==1234){
		cout << "login";
	}else{
		cout <<"Login Faild";
	}
}
int main() 
{
	string name;
	int pass;
	cout << "Enter Your Username ";
	cin >> name;
	cout << "Enter Your Pass ";
	cin >> pass;
	login (name,pass);
   
}
