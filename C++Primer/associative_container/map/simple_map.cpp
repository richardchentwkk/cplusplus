#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
	map<string, int> word_count;
	//Iterator to get pair
	map<string, int>::iterator map_it = word_count.begin();
	cout << map_it->first;
	cout << " " << map_it->second << endl;
	//Test for error part.
	//Key is const can not be assigned
	//map_it->first = "new key";
	++map_it->second;
	
	//Key is const can not be assigned
	cout << map_it->first;
	cout << " " << map_it->second << endl;
	return 0;
}
