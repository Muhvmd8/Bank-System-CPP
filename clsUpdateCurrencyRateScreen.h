#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsCurrency.h"
#include "clsInputValidate.h"



using namespace std;

class clsUpdateCurrencyRateScreen : protected clsScreen
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

    static void _PerformUpdateRate(clsCurrency& Currency)
    {
        if (!Currency.IsEmpty())
        {
            _PrintCurrency(Currency);
            char Answer = 'n';

            cout << "\nAre you want to update the rate of this currency y/n? ";
            cin >> Answer;

            if (Answer == 'y' || Answer == 'Y')
            {
                cout << "\n\n\nUpdate Currency Rate:\n\n";
                cout << "__________________________\n\n";
                cout << "Enter New Rate: ";
                float NewRate = clsInputValidate::ReadFloatNumber();
                Currency.UpdateRate(NewRate);

                cout << "Currency Rate Updated Successfully :-)\n\n";
                _PrintCurrency(Currency);

            }

        }
    }

public:
    static void UpdateRate()
    {
        _DrawScreenHeader("\t   Update Rate Screen");

        string CurrencyCode = "";
        cout << "\n\nPlease Enter Currency Rate Code: ";
        CurrencyCode = clsInputValidate::ReadString();

        while (!clsCurrency::IsCurrencyExist(CurrencyCode))
        {
            cout << "\Currency is not found, choose another one: ";
            CurrencyCode = clsInputValidate::ReadString();
        }

        clsCurrency Currency = clsCurrency::FindByCode(CurrencyCode);

        _PerformUpdateRate(Currency);

    }
};

