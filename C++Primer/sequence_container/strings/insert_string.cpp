#include <iostream>
#include <string>
using namespace std;
int main(){
	string s("I have a dream.");
	s.erase(s.size()-5, 5);
	cout << "s is:" << s << endl;
	s.insert(s.size(), 5, '!');
	cout << "s is now:" << s << endl;
	
	return 0;
}
