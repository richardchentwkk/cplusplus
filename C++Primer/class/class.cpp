#include<iostream>
#include<string>

class Screen{
public:
	typedef std::string::size_type index;
	char get() const { return contents[cursor]; }
	char get(index ht, index wd) const;
private:
	std::string contents;
	index cursor, height, width;
	
};

int main(){
	Screen myscreen;
	char ch = myscreen.get();
	std::cout << "ch is:" << ch << std::endl;
	ch = myscreen.get(0,0);
	std::cout << "ch is:" << ch << std::endl;
	return 0;
}
