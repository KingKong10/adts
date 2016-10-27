#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

	L1.insert(5,1);
	L1.insert(8,1);
    L1.insert(7,3);
    L2.insert(3,1);
    L2.insert(4,2);
    L2.insert(7,3);
    L2.remove(2);
    L1.remove(2);
 //Do some stuff with L1, L2, ...
 // ...
  for(int i= 1;i < L1.size(); i++)
	{
		cout << L1.get(i) << endl;
		//cout << L2.get(i) << endl;
	}
	cout << "\n" ;
	for(int i= 1; i < L2.size(); i++)
	{
		//cout << L1.get(i) << endl;
		cout << L2.get(i) << endl;
	} 
	cout << L1.get(2);
}
