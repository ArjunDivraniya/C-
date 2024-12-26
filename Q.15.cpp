#include <iostream>
#include <algorithm>
using namespace std;
void check(){
	int arr[5]={1,2,3,4,5};
	int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size-1;i++){
    	cout << arr[i]<<" ";
	}
    
}
int main() 
{
   check(); 
}
