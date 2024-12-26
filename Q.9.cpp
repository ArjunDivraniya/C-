#include <iostream>
#include <algorithm>
using namespace std;
void check(){
	int arr[5]={4,2,8,5,1};
	int size=sizeof(arr)/sizeof(arr[0]);
    
    sort(arr,arr+size);
    
    for(int i=0;i<size;i++){
    	cout << arr[i];
	}
}
int main() 
{
   check(); 
}
