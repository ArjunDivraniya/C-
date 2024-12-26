#include <iostream>
using namespace std;
void color(string colo){
	if(colo=="red"){
		cout << "Stop";
		
	}else if(colo== "yellow"){
		cout << "Slow Down";
	}else if(colo=="green"){
		cout << "Go";
	}else{
		cout << "Not Valid Color";
	}
}
int main() 
{
string colo;
cout << "Enter Color ";
cin >> colo;	
color(colo);
}

