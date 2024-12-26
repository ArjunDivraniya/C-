#include <iostream>
using namespace std;
void check(){
   int arr[4]={1,2,3,4};
   
   int size =sizeof(arr)/sizeof(arr[0]);
   size++;
   int arr2[size];
   arr2[0]=0;
   for(int i=0;i<size;i++){
   	arr2[i+1]=arr[i];
   	cout << arr2[i] << " ";
   }
}
int main() 
{
   check(); 
}
