#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> ivec;
	cout	<< "ivec size: " << ivec.size() 
			<< " capacity: "<< ivec.capacity() << endl;
	//Reverse capacity to 50
	ivec.reserve(50);

	//Add 24 elements
	for(vector<int>::size_type ix=0; ix!=24; ++ix)
		ivec.push_back(ix);

	cout	<< "ivec size: " << ivec.size() 
			<< " capacity: "<< ivec.capacity() << endl;
	return 0;
}
