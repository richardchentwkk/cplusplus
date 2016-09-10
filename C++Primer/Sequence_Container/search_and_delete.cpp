#include<iostream>
#include<string>
//Import Algorithm for find function
#include<algorithm>
#include<list>

using namespace std;

int main(){
	//Search content
	string searchValue("Quasimodo");
	list<string> slist(10,"uasmdo");
	list<string>::iterator iter = find(slist.begin(), slist.end(), searchValue);

	if(iter!=slist.end()){
		//If found and not end of the list, erase it.
		slist.erase(iter);
		cout << slist.size() << endl;
	}

	//Clear all elements.
	slist.clear();
	cout << slist.size() << endl;

}
