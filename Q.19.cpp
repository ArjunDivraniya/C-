#include <iostream>
#include <algorithm>
using namespace std;
void  check(){
	int arr[5]={1, 2, 5, 4, 6};
//	int arr2[5]={1, 2, 3, 4, 5};
	int size=sizeof(arr)/sizeof(arr[0]);
//    int count =0;
//    sort(arr,arr+size);
//    
//    for(int i=0;i<size;i++){
//    	if(arr[i]==arr2[i]){
//    		count++;
//		}
//	}
//	if(count==size){
//		cout << "true";
//	}else {
//		cout <<"False";
//	}
int count =0;
for (int i=0;i<size;i++){
	if(arr[i]>arr[i+1]){
		count++;
	}
}
if(count==size){
	cout << "true";
}else{
	cout << "false";
}
}
int main() 
{
check(); 
   
}

