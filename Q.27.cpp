#include <iostream>
using namespace std;

string getf(string name){
	int  index=name.find_last_of('.');
	cout << index<<endl <<name.substr(index+1);

}
int main() 
{
  string name="coding.gita.";
  getf(name);
  
    return 0;
}


//#include <iostream>
//using namespace std;
//
//string getf(string name){
//	int  index=name.rfind('.');
//	cout << index<<endl <<name.substr(index+1);
//
//}
//int main() 
//{
//  string name="document.pdf";
//  getf(name);
//  
//    return 0;
//}
