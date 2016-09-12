#include<iostream>
#include<string>
using namespace std;

/*	String special functions,
	1) substr()
	2) append()
	3) replace()
	4) find()
 */
int main(){
	//Sub string
	string s1("hello world");
	cout << "Sub string is:" << s1.substr(6,5) << endl;
	//Append
	string s2("C++ Primer");
	s2.append(" 3rd Ed.");
	cout << "After append s:" << s2 << endl;
	//Replace
	s2.replace(11,3,"4th");
	cout << "After erase and replace:" << s2 << endl;
	//Find
	string name("AnnaBelle");
	string::size_type pos1 = name.find("Anna");
	cout << "Find positions is:" << pos1 << endl;
	return 0;
}
