#include <iostream>
#include<string>

using namespace std;

void printMenu()
{
    cout << "1: Print help " << endl;
    cout << "2: Print exchange stats " << endl;
    cout << "3: make an offer " << endl;
    cout << "4: make a bid " << endl;
    cout << "5: Print wallet " << endl;
    cout << "6: Continue " << endl;
    cout << "Select an option" << endl;
    cout << "=============" << endl;
}

void getHelp()
{
    cout << "Print help" << endl;
}

void getExchangeStats()
{
    cout << "Print exchange stats" << endl;
}

void getBid()
{
    cout << "make a bid :" << endl;
}

void printWallet()
{
    cout << "Print wallet :" << endl;
}

void getContinue()
{
    cout << "Continue :" << endl;
}

int getUserOption()
{
    int userOption;
    cout << "Type in 1-6" << endl;
    cin >> userOption;
    cout << "You chose :" << userOption << endl;
    return userOption;
}

void processUserOption(int userOption)
{

    if (userOption == 0)
    {
        cout << "Choose 1-6" << endl;
    }
    if (userOption == 1)
    {

        getHelp();
    }
    if (userOption == 2)
    {
        getExchangeStats();
    }
    if (userOption == 3)
    {
        cout << "make an offer :" << endl;
    }
    if (userOption == 4)
    {
        getBid();
    }
    if (userOption == 5)
    {
        printWallet();
    }
    if (userOption == 6)
    {
        getContinue();
    }
}
int main()
{
    enum class OrderBooktype{bid,ask};
    
    double price =5319.450289;
    double amount =0.00020075;
    string timestamp{"2020/02/17 17:01:24.884492"};
    string product{"BTC/USDT"};
    OrderBookType orderType = OrderBookType::ask;


    while (true)
    {

        printMenu();
        int userOption = getUserOption();
        processUserOption(userOption);
        

        return 0;
    }
}