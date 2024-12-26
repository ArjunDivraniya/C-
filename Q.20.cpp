#include <iostream>
#include <algorithm>
using namespace std;
void check(){
	int arr[5]={80, 30, 70, 50, 20};
	int size=sizeof(arr)/sizeof(arr[0]);
	int max=arr[0];
	int min=arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
		}else if(arr[i]<min){
			min=arr[i];
		}
	}
   int diff=max-min;
   cout << diff;
    
}
int main() 
{
   check(); 
}
