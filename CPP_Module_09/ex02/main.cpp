// #include "PmergeMe.hpp"



int main(int argc, char **argv)
{
    if ((argc > 3 && argc < 3001) && is_digit(argv))
    {
        std::cout << "hi" << std::endl;
    }
    else
    {
        std::cout << "Error Invalid Arguments." << std::endl;
        std::cout << "Usage: ./PmergeMe 3 5 9 7 4 ..." << std::endl;
    }
    return (0);
}