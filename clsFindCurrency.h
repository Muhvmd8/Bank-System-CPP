#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsCurrency.h"
#include <iomanip>
#include "clsInputValidate.h"

using namespace std;


class clsFindCurrency : protected clsScreen
{

private:

    static void _PrintCurrency(clsCurrency Currency)
    {
        cout << "\n\nCurrency Card:\n";
        cout << "_____________________________\n";
        cout << "\nCountry    : " << Currency.Country();
        cout << "\nCode       : " << Currency.CurrencyCode();
        cout << "\nName       : " << Currency.CurrencyName();
        cout << "\nRate(1$) = : " << Currency.Rate();

        cout << "\n_____________________________\n";

    }

public:

    static void FindCurrency()
    {
        _DrawScreenHeader("\t   Find Currency Screen");
        short Choice;
        cout << "\n\nFind By: [1] Code or [2] Country ? ";
        Choice = clsInputValidate::ReadShortNumberBetween(1, 2);

        if (Choice == 1)
        {
            string CurrencyCode = "";
            cout << "\n\nPlease Enter CurrencyCode: ";
            CurrencyCode = clsInputValidate::ReadString();

            clsCurrency Currency = clsCurrency::FindByCode(CurrencyCode);

            if (Currency.IsEmpty())
            {
                cout << "\n\nCurrency Not Found :-(";
            }
            else
            {
                cout << "\n\nCurrency Found :-)";
                cout << "\nCurrency Card:";
                _PrintCurrency(Currency);
                
            }

        }
        else
        {

            string Country = "";
            cout << "\n\nPlease Enter Country: ";
            Country = clsInputValidate::ReadString();

            clsCurrency Currency = clsCurrency::FindByCountry(Country);

            if (Currency.IsEmpty())
            {
                cout << "\n\nCurrency Not Found :-(";
            }
            else
            {
                cout << "\n\nCurrency Found :-)";

                _PrintCurrency(Currency);

            }


        }
    }
};

