#include <iostream>
#include <algorithm>
using namespace std;
void check(){
	int arr[6]={1, -2, 3, -4, 5, -6};
	int size=sizeof(arr)/sizeof(arr[0]);
	int pcount=0;
	int ncount=0;
	for(int i=0;i<size;i++){
		if(arr[i]>0){
			pcount++;
		}else if(arr[i]<0){
			ncount++;
		
		}
	}
	cout << "Positive "<< pcount << endl << "Nagative "<<ncount;
  
    
}
int main() 
{
   check(); 
}
