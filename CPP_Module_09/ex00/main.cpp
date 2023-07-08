#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    std::string	content_str;
    std::ifstream Data("data.csv");
    // if (Data.is_open())
	//     std::cout << "hi" << std::endl;
	while (!Data.eof())
	{
    	std::getline(Data, content_str);
    	std::cout << content_str << std::endl;
	}
	



}