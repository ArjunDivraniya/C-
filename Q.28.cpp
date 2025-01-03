//#include <iostream>
//using namespace std;
//
//void large(int num1,int num2){
//	if(num1>num2){
//		cout<< "largest number is "<<num1;
//	}else{
//		cout<< "largest number is " << num2;
//	}
//}
//
//int main(){
//	int num1=10;
//	int num2=20;
//	
//	 large(num1,num2);
//	
//}
//
//2nd Approach

//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//void large(int num1,int num2){
//cout << "largest number is " << max(num1,num2);
//
//}
//
//int main(){
//	int num1=10;
//	int num2=20;
//	
//	 large(num1,num2);
//	
//}

//3rd Approach

#include <iostream>
#include <algorithm>
using namespace std;

void large(int num1,int num2){
cout << "largest number is " << (num1>num2?num1:num2);

}

int main(){
	int num1=101;
	int num2=201;
	
	 large(num1,num2);
	
}
