#include <iostream>
#include <cctype>
using namespace std;
//void check(){
//	string str="hello";
//	
//	for(int i=0;i<str.length();i++){
//		str[i]=toupper(str[i]);
//		cout << str[i];
//	}
//}
//int main() 
//{
//   check(); 
//}


void check(){
	string str="hello";
	
	for(int i=0;i<str.length();i++){
	   
	   	str[i]=str[i]-32;
	   }
	
	cout << str;
}
int main() 
{
   check(); 
}
