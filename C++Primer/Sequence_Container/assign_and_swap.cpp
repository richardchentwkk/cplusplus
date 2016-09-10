#include<iostream>
#include<list>
using namespace std;
int main(){
	list<int> c1(10,42), c2(5,21), d1(5,21), d2(1,35);
	c1 = c2;
	c1.erase(c1.begin(),c1.end());
	c1.insert(c1.begin(),c2.begin(),c2.end());
	//Swap
	cout << "Start swap..." << endl;
	d1.swap(d2);
	cout << "D1 size:" << d1.size() << " D2 size:" << d2.size() << endl;
	//Assign
	d1.assign(10,53);
	cout << "After assignment, size is:" << d1.size() << endl;
	return 0;
}
