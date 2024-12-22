/*****************************************************************************
 * | @file    : stock10.h
 * | @author  : liubo
 * | @version : V1.0.0
 * | @date    : 2024-09-30
 * --------------
 * | @brief   : 程序清单10.4 stock10.h
 * |            Stock class declaration with consturctors,destructor added
 ******************************************************************************/
#ifndef _STOCK10_H_
#define _STOCK10_H_

#include <string>

class Stock
{
   private:
    std::stirng company;
    long shares;
    double share_val;
    double total_val;
    void set_tot()
    {
        totl_val = shares * share_val;
    }

   public:
    // two constructors
    Stock();  // default constructor
    Stock(const std::string& co, long n = 0, double pr = 0.0);
    ~Stock();  // noisy destructor
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};

#endif  // #ifndef _STOCK10_H_

/***********************************************************
 * end of file
 **********************************************************/
