# Banking Management System in C++

A simple, console-based Banking Management System developed in C++ to practice object-oriented programming, input validation, and basic banking operations.

## Overview

This project simulates basic banking operations through a menu-driven console application. Users can create an account, log in, deposit money, withdraw money, check their balance, and view their account details.

It was developed as a learning project to strengthen my C++ programming and software development fundamentals.

## Features

- Account Creation: Create an account with a username and a password of at least six characters.
- Account Login: Authenticate users with a maximum of three login attempts.
- Deposit Money: Deposit money with basic input validation.
- Cash Withdrawal: Withdraw money while checking for positive amounts and sufficient funds.
- Balance Inquiry: View the current account balance.
- Account Details: View the username and account balance without displaying the password.
- Exit Application: Exit the program with a farewell message.

## Technologies Used

- C++
- Standard C++ libraries
- Windows-specific console functionality

## Concepts Practiced

- Object-Oriented Programming (OOP)
- Classes and Objects
- Inheritance
- Member Functions
- Conditional Statements
- Loops
- Input Validation
- Basic Authentication Logic

## Initial Account Balance

The application starts with an initial account balance of 100 units.

## How to Run

### Prerequisites

- A Windows computer
- A C++ compiler, such as GCC through MinGW-w64
= A code editor, such as Visual Studio Code (optional)

### Compile and Run

1. Download or clone this repository.
2. Open a terminal in the project directory.
3. Compile the source file:

```bash
g++ banking_management_system.cpp -o banking_management_system
```

4. Run the application:

```powershell
.\banking_management_system.exe
```

## Current Limitations

- Account information and balance are stored in memory and are lost when the application closes.
- The application supports a single account per program execution.
- Passwords are stored as plain text in memory.
- This project is an educational simulation and is not intended for real banking use.

## Future Improvements

- Support multiple accounts.
- Add persistent storage using files or a database.
- Improve input validation and error handling.
- Implement secure password storage.

## Author

**Inayat Ullah**

Software Engineering Student | C++ | DSA | Exploring AI & Machine Learning

GitHub: [@inayat-ullah31](https://github.com/inayat-ullah31)