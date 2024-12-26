#include <iostream>
using namespace std;
void check (char ch){
	if(ch=="a"||ch=="e"||ch=="i"||ch=="o"||ch=="u"){
		cout << "Vowel";
	}else{
		cout << "constant";
	}
	
}

int main() 
{
	char ch="a";
   
    check(ch);
}
