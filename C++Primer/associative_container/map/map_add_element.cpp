#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
	map<string, int> word_count;
	word_count["Anna"] = 1;
	
	cout << "Result is:" << word_count["Anna"] << endl;

	//Using insert to add
	word_count.insert(map<string,int>::value_type("Richard",2));

	cout << "Richard is:" <<word_count["Richard"]<< endl;

	//Delete element
	if(word_count.erase("Anna"))
		cout << "OK! " << "Anna removed." << endl;
	else
		cout << "Sorry, can not found this key." << endl;

	return 0;
}
