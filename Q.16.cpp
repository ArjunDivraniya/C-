#include <iostream>
#include <algorithm>
using namespace std;
void check(){
	int arr[5]={3, 5, 9, 1, 7};
	int size=sizeof(arr)/sizeof(arr[0]);
	int count=0;
    for(int i=0;i<size;i++){
    	if(arr[i]>0){
    		count++;
		}
	}
	if(count==size){
		cout << "True";
	}else{
		cout << "False";
	}
    
}
int main() 
{
   check(); 
}
