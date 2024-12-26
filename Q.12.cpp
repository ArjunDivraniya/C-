#include <iostream>
using namespace std;
void check(){
   int arr[5]={1,2,3,4,5};
   int size=sizeof(arr)/sizeof(arr[0]);
   arr[size]=6;
   size++;
   for(int i =0;i<size;i++){
   	cout <<arr[i] << " ";
   }
}
int main() 
{
   check(); 
}
