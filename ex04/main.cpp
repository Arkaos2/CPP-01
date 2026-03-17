#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

int main(int argc, char **argv)
{
	if(argc != 4)
	{
		std::cout << "wrong number of arguments";
		return 1;
	}
	std::ifstream read_fd(argv[1]);
	if(!read_fd)
	{
		std::cout << "fail open read fd";
		return(1);
	}
	std::string filename = std::string(argv[1]) + ".replace";
	std::ofstream write_fd(filename.c_str());
	if(!write_fd)
	{
		std::cout << "fail open write fd";
		return(1);
	}
	std::string line;
	int start = 0;
	int end = 0;
	std::string s = argv[2];
	int len = s.length();
	while(std::getline(read_fd, line))
	{
		start = 0;
		while((start = line.find(argv[2], start)) != std::string::npos)
		{
			line.erase(start, len);
			line.insert(start, argv[3]);
		}
		write_fd << line;
	}
}
