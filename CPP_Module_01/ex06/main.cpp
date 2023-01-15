#include "Harl.hpp"

void	complain_index(int *j, char *argv)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == argv)
		{
			*j = i;
			return;
		}
	}
	*j = -1;
}

void	harl_complain(char *argv, Harl &Person)
{
	int j = 0;

	complain_index(&j, argv);
	switch (j)
	{
		case 0:
			Person.complain("DEBUG");
		case 1:
			Person.complain("INFO");
		case 2:
			Person.complain("WARNING");
		case 3:
			Person.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]"
					 << std::endl;
	}
}

int main(int argc, char **argv)
{
	Harl Person;

	if (argc != 2)
		std::cout << "[ Probably complaining about insignificant problems ]"
					<< std::endl;
	else
		harl_complain(argv[1], Person);
}