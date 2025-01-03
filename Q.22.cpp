#include <iostream>
#include <cctype>
using namespace std;
//void check(){
//	string str="Hello, World!";
//	int i=0;
//	int count;
//	while(str[i]!='\0'){
//		count++;
//		i++;
//	}
//	cout <<"len " << count;
//	
//	}
//int main() 
//{
//   check(); 
//}

//2nd Approach 
#include <iterator>
int check(string str){

	return distance(str.begin(),str.end());
	
	}
int main() 
{
		string str="Hello, World!";
   check(str); 
}
