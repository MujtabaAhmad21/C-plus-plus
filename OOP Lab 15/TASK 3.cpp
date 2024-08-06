#include <iostream>
using namespace std;

class Customer 
{
private:
    string Cust_name;
    int Cust_AC_No;
    double Cust_balance;
    double Amount_withdraw;

public:
    void setCust_name(string name)
    {
        Cust_name = name;
    }
    string getCust_name() 
    {
        return Cust_name;
    }
    void setCust_AC_No(int ac_no)
    {
        Cust_AC_No = ac_no;
    }
    int getCust_AC_No()
    {
        return Cust_AC_No;
    }
    void setCust_balance(double balance) 
    {
        while (true) 
        {
            try 
            {
                if (balance < 0)
                {
                    throw "Balance cannot be negative. Please enter again: ";
                }
                Cust_balance = balance;
                break;
            }
            catch (const char* msg) {
                cout << msg;
                cin >> balance;
            }
        }
    }

    double getCust_balance()
    {
        return Cust_balance;
    }

    void setAmount_withdraw(double amount)
    {
        while (true) 
        {
            try
            {
                if (amount > Cust_balance) 
                {
                    throw "Withdraw amount cannot be greater than current balance. Please enter again: ";
                }
                Amount_withdraw = amount;
                break;
            }
            catch (const char* msg)
            {
                cout << msg;
                cin >> amount;
            }
        }
    }

    double getAmount_withdraw()
    {
        return Amount_withdraw;
    }
};

int main()
{
    Customer cust;
    string name;
    int ac_no;
    double balance, amount;

    cout << "Enter customer name: ";
    cin >> name;
    cust.setCust_name(name);

    cout << "Enter account number: ";
    cin >> ac_no;
    cust.setCust_AC_No(ac_no);

    cout << "Enter balance: ";
    cin >> balance;
    cust.setCust_balance(balance);

    cout << "Enter withdraw amount: ";
    cin >> amount;
    cust.setAmount_withdraw(amount);

    cout << "Customer name: " << cust.getCust_name() << endl;
    cout << "Account number: " << cust.getCust_AC_No() << endl;
    cout << "Balance: " << cust.getCust_balance() << endl;
    cout << "Withdraw amount: " << cust.getAmount_withdraw() << endl;

    system("pause");
    return 0;
}