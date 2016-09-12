#include<iostream>
#include<list>
using namespace std;

int checkcontent( list<int> ilist){
	for(list<int>::iterator i = ilist.begin(); i!= ilist.end(); ++i){
		cout << *i << " " ;
	}
	cout << endl;
}

int main(){
	//List init
	list<int> ilist(10,42);
	//Add five 0 to the end.
	ilist.resize(15);
	cout << "Start to check 15 items:" << endl;
	checkcontent(ilist);
	cout << "Add -1 into list:" << endl;
	ilist.resize(25,-1);
	checkcontent(ilist);
	cout << "Remove list size to 5 items:" << endl;
	ilist.resize(5);
	checkcontent(ilist);
	return 0;
}
