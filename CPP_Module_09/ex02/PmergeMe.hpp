#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>

class PmergeMe
{
    private:
        void    fillContainers(char **argv);
        
    public:
        PmergeMe();
        PmergeMe(char **argv);
        PmergeMe(const PmergeMe &object);
        PmergeMe &operator=(const PmergeMe &rhs);
        ~PmergeMe();
};

PmergeMe::PmergeMe()
{
}

void    PmergeMe::fillContainers(char **argv)
{
    int i, j;

    i = 1;

}

PmergeMe::PmergeMe(char **argv)
{
    this->fillContainers(argv);

}

PmergeMe::PmergeMe(const PmergeMe &object)
{
    *this = object;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs)
{
    if (this != &rhs)
    {

    }
    return (*this);
}

PmergeMe::~PmergeMe()
{
}


#endif