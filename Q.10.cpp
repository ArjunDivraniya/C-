#include <iostream>
using namespace std;
void check(){
	int arr[5]={1,2,3,4,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	int oddcount=0;
	int evencount=0;
	for(int i=0;i<size;i++){
		if(arr[i]%2==0){
			evencount++;
		}else{
			oddcount++;
		}
	}
	cout << "oddcount = " <<oddcount <<endl;
	cout << "evencount = " << evencount ;
}
int main() 
{
   check(); 
}
