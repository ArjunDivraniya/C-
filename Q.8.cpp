#include <iostream>
using namespace std;
void avg(){
	int arr[5]={1,2,3,4,5};
	int len=sizeof(arr)/sizeof(arr[0]);
	int sum;
	for(int i=0;i<len;i++){
		sum+=arr[i];
	}
	int avrage=sum/len;
	cout << avrage;
}
int main() 
{
   avg();
}
