/*****************************************************************************
 * | @file    : stock10.cpp
 * | @author  : liubo
 * | @version : V1.0.0
 * | @date    : 2024-09-30
 * --------------
 * | @brief   : 程序清单10.5 stock10.cpp
 *              Stock class with constructors, destructor added
 ******************************************************************************/

#include <iostream>
#include "stock10.h"

using std::cin;
using std::cout;
using std::endl;
// constructores (verbose versions)

Stock::Stock()  // default constructor

{
    atd::cout << "Default constructor called\n";

    company = "no name";

    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string& co, long n, double pr)
{
    cout << "Constructor using " << co << " called\n";
    company = co;
    if (n < 0) {
        cout << "Number of shares can't be negative;" << company << " shares set to 0.\n";
        shares = 0;

    } else {
        shares = n;
    }

    share_val = pr;
    set_tot();
}

Stock::~Stock()
{
    cout << "Bye, " << company << "!\n";
}

// other metheds
void Stock::buy(long num, double price)
{
    if (num < 0) {
        cout << "Number of shares purchased can't be negative." << "Transaction is aborted.\n";
    } else {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price){




if(num < 0){


cout << "Number of shares sold can't be negative."<< "Transaction is aborted.\n";





} else if (num > shares){




    cout << "You can't sell more than you have! " << "Transaction is aborted.\n";
}else {
shares -= num;
share_val = price;
set_tot();






}



}

/***********************************************************
 * end of file
 **********************************************************/
