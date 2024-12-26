#include <iostream>
using namespace std;
void check(int age){
	if(age>=18){
		cout << "This Person Is Eligible For Vote";
	}else{
		cout << "This Person Is not Eligible For Vote";
	}
}

int main() 
{
    int age;
    cout << "Enter Your Age ";
    cin >>age;
    
    check(age);
}
