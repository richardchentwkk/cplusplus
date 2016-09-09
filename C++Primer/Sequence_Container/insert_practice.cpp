#include<iostream>
#include<string>
#include<list>
#include<vector>
using namespace std;

int main(){
	vector<string> svec;
	list<string> slist;
	string spouse("Beth");

	//Action below equals slist.push_front()
	slist.insert(slist.begin(), spouse);
	for(list<string>::iterator i = slist.begin(); i!=slist.end(); ++i){
		cout << *i << endl;
	}
	
	//Svec test
	svec.insert(svec.end(),10,"Anna");
	string sarray[4]={"quasi","simba","frollo","scar"};
	
	cout << "### Start to test svec:" << endl;
	// Insert arrays to slist end
	slist.insert(slist.end(),sarray,sarray+4);

	//Make iterator
	list<string>::iterator slist_iter = slist.begin();
	slist.insert(slist_iter, sarray+2, sarray+4);

	for(list<string>::iterator i = slist.begin(); i!=slist.end(); ++i){
		cout << *i << endl;
	}

	for(vector<string>::iterator i = svec.begin(); i!=svec.end(); ++i ){
		cout << *i << endl;
	}


}
