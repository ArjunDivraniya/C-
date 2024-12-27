#include <iostream>
using namespace std;
void check(){
   int arr[5]={1,2,3,4,5};
   int size=sizeof(arr)/sizeof(arr[0]);
  int count=0;
   
   for(int i=0;i<size;i++){
   	if(arr[i]==3){
   		count++;
	   }
  
   }
    if(count>0){
   	cout << "True";
   }else{
   	cout << "False";
   }
}
int main() 
{
   check(); 
}
