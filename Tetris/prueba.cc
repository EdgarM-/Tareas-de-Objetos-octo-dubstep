#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <string>
#include <vector>

int main(int argc, char const *argv[])
{
	std::vector<int> prueb;
	//std::vector<int>::iterator it;
	prueb.assign (1,1);
	prueb.assign (1,2);
	prueb.assign (1,3);
	prueb.assign (1,4);
	//it = prueb.begin();
	//prueb[0] = 55;
	//prueb[1] = 56;
	//prueb[2] = 57;
	//prueb[3] = 58;
	//std::cout<<prueb[0]<<std::endl;
	//std::cout<<prueb[1]<<std::endl;	
	//std::cout<<prueb[2]<<std::endl;	
	//std::cout<<prueb[3]<<std::endl;	
	std::cout << "Size of prueb: " << int (prueb.size()) << '\n';
	return 0;
}