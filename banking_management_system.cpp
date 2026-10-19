#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <string>
using namespace std;

class Account_creation
{
protected:
    string name, name1, password, password1;

public:
    void Display1()
    {
        cout << "\n========== ALLIED BANK LIMITED ==========" << endl;
        cout << endl;
        cout << "-> CREATE ACCOUNT " << endl;
        cout << "-> ACCOUNT LOGIN " << endl;
    }
    void Create_Account()
{
    cout << "\n      CREATE ACCOUNT      " << endl;

    while (true)
    {
        cout << "Enter User Name: ";
        getline(cin, name);

        if (!name.empty())
        {
            break;
        }

        cout << "\nUsername cannot be empty. Please try again.\n";
    }

    while (true)
    {
        cout << "Enter Your Password (minimum 6 characters): ";
        getline(cin, password);

        if (password.length() >= 6)
        {
            break;
        }

        cout << "\nPassword must contain at least 6 characters."
             << " Please try again.\n\n";
    }

    cout << "\nProcessing..." << endl;
    Sleep(2000);

    cout << "\nCongratulations! Your account has been created successfully."
         << endl;

    Sleep(2000);
    system("cls");
}
    void Account_login()
{
    int attempts = 0;
    const int maxAttempts = 3;

    while (attempts < maxAttempts)
    {
        cout << "\n      ACCOUNT LOGIN      " << endl;

        cout << "Enter User Name: ";
        getline(cin, name1);

        cout << "Enter Your Password: ";
        getline(cin, password1);

        cout << "\nPROCESSING...." << endl;
        Sleep(1500);

        if (name == name1 && password == password1)
        {
            cout << "\nAccount login successful!" << endl;
            Sleep(1500);
            system("cls");
            return;
        }
        else
        {
            attempts++;

            cout << "\nInvalid username or password!" << endl;
            cout << "Attempts remaining: "
                 << maxAttempts - attempts << endl;

            if (attempts < maxAttempts)
            {
                Sleep(1500);
                system("cls");
            }
        }
    }

    cout << "\nMaximum login attempts exceeded." << endl;
    cout << "Please restart the application to try again." << endl;

    Sleep(2000);
    exit(0);
}
};

class Bank_Menu : public Account_creation
{
protected:
    int amount = 100, balance;
    char x;

public:
    void Display();
    void Cash_Withdraw();
    void Check_Balance();
    void Account_Details();
    void Exit_Application();
    void Deposit_Money();
void Back_to_Main_menu()
{
    while (true)
    {
        cout << "\nDo you want to perform another transaction? (Y/N): ";

        cin >> x;

        if (x == 'Y' || x == 'y')
        {
            system("cls");
            Display();
            return;
        }
        else if (x == 'N' || x == 'n')
        {
            system("cls");
            Exit_Application();
            return;
        }
        else
        {
            cout << "\nInvalid choice! Please enter Y or N.\n";
        }
    }
}
};

void Bank_Menu::Display()
{
    int choice;
    cout << "     Hey " << name << endl;
skip:
    cout << "\n   WELCOME TO ALLIED BANK LIMITED \n"
         << endl;
    cout << "1) Deposit Money " << endl;
    cout << "2) Cash Withdraw " << endl;
    cout << "3) Check Balance " << endl;
    cout << "4) Account Details " << endl;
    cout << "5) Exit Application " << endl;
    cout << "\n Please enter your choice : ";
    cin >> choice;
    system("cls");
    switch (choice)
    {
    case 1:
        Deposit_Money();
        break;
    case 2:
        Cash_Withdraw();
        break;
    case 3:
        Check_Balance();
        break;
    case 4:
        Account_Details();
        break;
    case 5:
        Exit_Application();
        break;
    default:
        cout << " \ninvalid choice ! Please enter the choice ";
        Sleep(1000);
        system("cls");
        goto skip;
    }
};

void Bank_Menu::Deposit_Money()
{
    cout << "\n         DEPOSIT MONEY          " << endl;

    cout << "\nEnter the amount you want to deposit: ";

    if (!(cin >> balance))
    {
        cout << "\nInvalid input! Please enter a whole number." << endl;

        cin.clear();
        cin.ignore(10000, '\n');

        Back_to_Main_menu();
        return;
    }

    if (balance <= 0)
    {
        cout << "\nInvalid amount! Please enter a positive amount." << endl;
    }
    else
    {
        amount += balance;

        cout << "\nProcessing..." << endl;
        Sleep(1500);

        cout << "\nYour amount has been deposited successfully." << endl;
        cout << "\nYour total account balance is: " << amount << endl;
    }

    Back_to_Main_menu();
}
void Bank_Menu::Cash_Withdraw()
{
    cout << "\n            CASH WITHDRAW            " << endl;

    cout << "\nEnter the amount you want to withdraw: ";

    if (!(cin >> balance))
    {
        cout << "\nInvalid input! Please enter a whole number." << endl;

        cin.clear();
        cin.ignore(10000, '\n');

        Back_to_Main_menu();
        return;
    }

    if (balance <= 0)
    {
        cout << "\nInvalid amount! Please enter a positive amount." << endl;
    }
    else if (balance > amount)
    {
        cout << "\nInsufficient funds! Your account balance is "
             << amount << endl;
    }
    else
    {
        cout << "\nProcessing..." << endl;
        Sleep(1500);

        amount -= balance;

        cout << "\nPlease collect your cash." << endl;
        cout << "\nYour remaining account balance is: "
             << amount << endl;
    }

    Back_to_Main_menu();
}
void Bank_Menu::Check_Balance()
{

    cout << "\n           ACCOUNT BALANCE             " << endl;
    cout << "\n Your Account Balance is " << amount << endl;
    Back_to_Main_menu();
}
void Bank_Menu::Account_Details()
{

    cout << "         ACCOUNT DETAILS           " << endl;
    cout << "\n User Name : " << name << endl;
    cout << " Account Balance : " << amount << endl;
    Back_to_Main_menu();
}
void Bank_Menu::Exit_Application()
{
    cout << "\nThank you for visiting Allied Bank Limited!"
         << endl;
    cout << "Have a great day!" << endl;
}
int main()
{

    Bank_Menu obj;
    obj.Display1();
    obj.Create_Account();
    obj.Account_login();

    obj.Display();

    return 0;
}