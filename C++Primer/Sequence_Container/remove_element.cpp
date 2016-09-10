#include<iostream>
#include<string>
#include<list>
using namespace std;
int main(){
	list<string> ilist(10,"Hello");
	while(!ilist.empty()){
		//Do some process and pop-up element.
		ilist.pop_front();
		cout << ilist.size() << endl;
	}

	return 0;
}
