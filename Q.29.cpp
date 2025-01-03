//#include <iostream>
//using namespace std;
// void finf(int num[],int size,int target){
// 	
// 	for(int i=0;i<size;i++){
// 		for(int j=i+1;j<size;j++){
// 			if(num[i]+num[j]==target){
// 				cout <<"["<< i << "," << j<<"]";
//			 }
//		 }
//	 }
// }
// 
// int main (){
// 	int num[]={2,7,11,15};
// 	int size =sizeof(num)/sizeof(num[0]);
// 	int target=22;
// 	finf(num,size,target);
// }


#include <iostream>
using namespace std;
 void finf(int num[],int size,int target){
 	
 	for(int i=0;i<size;i++){
 		for(int j=i+1;j<size;j++){
 			if(num[j]==target-num[i]){
 				cout <<"["<< i << "," << j<<"]";
			 }
		 }
	 }
 }
 
 int main (){
 	int num[]={2,7,11,15};
 	int size =sizeof(num)/sizeof(num[0]);
 	int target=22;
 	finf(num,size,target);
 }
