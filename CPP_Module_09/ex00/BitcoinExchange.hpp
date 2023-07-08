#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>

class BitcoinExchange
{
    private:
        /* data */
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &object);
        BitcoinExchange &operator=(const BitcoinExchange &rhs);
        ~BitcoinExchange();
};

#endif