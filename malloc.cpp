#include<iostream>
using namespace std;
int main()
{
	for (int i = 0; i < 10; ++i) {
		std::cout << "Str_" + std::to_string(i) << std::endl;
	}
	return 0;
}
