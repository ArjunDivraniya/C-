#include <iostream>
using namespace std;
void target(int num){
	int oddsum=0,evensum=0;
	
	while(num!=0){
		int digit =num%10;
		if(digit%2==0){
			evensum+=digit;
		}else{
			oddsum+=digit;
		}
	num=num/10;	
	}
	cout << "Oddsum = " << oddsum << "    " << "evensum = " <<evensum;
}
int main(){
	int num=123456;
	target(num);
}
