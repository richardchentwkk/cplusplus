#include <iostream>
#include <list>
using namespace std;

int main(){
	list<int> ilist;
	for(size_t ix = 0; ix!=4; ++ix){
		ilist.push_back(ix);
	}		
	
	for(size_t ix = 0; ix!=4; ++ix){
		ilist.push_front(ix);
	}

	for (list<int>::iterator i = ilist.begin(); i != ilist.end(); ++i)
		cout << *i << endl;

	return 0;
}
