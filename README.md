# 🏦 Bank Management System (C++)

## 📌 Overview
This is a **console-based Bank Management System** built with **C++**.  
The project demonstrates **Object-Oriented Programming (OOP)** concepts such as **Encapsulation, Inheritance, Polymorphism**, and applies structured design with multiple classes for different screens and functionalities.  

It manages **clients, users, accounts, transactions, and currency exchange** with data stored in text files instead of a database.

---

## ✨ Features

### 👤 Client Management
- Add new clients  
- Update client information  
- Delete clients  
- Find/search clients  
- List all clients  
- Show total balances  

### 👨‍💻 User Management
- Add new users  
- Update users  
- Delete users  
- Find/search users  
- List all users  
- Show login/register logs  

### 💰 Transactions
- Deposit money  
- Withdraw money  
- Transfer between accounts  
- View transfer logs  
- Transaction history  

### 💱 Currency Management
- List all currencies  
- Find currency by code  
- Update currency rates  
- Currency calculator  

### 🔐 Authentication
- Login system with user accounts  
- Role-based screens for users  
- Logging of all login/register activities  

---

## 🛠 Project Structure

```
├── main.cpp                     # Entry point
├── Global.h / clsGlobal.h       # Global 
├── clsPerson.h                  # Base class for Person
├── clsBankClient.h              # Bank client class
├── clsUser.h                    # User management class
├── clsCurrency.h                # Currency entity class
├── clsDate.h                    # Date utilities
├── clsString.h / clsUtil.h      # Helper utilities
│
├── Screens/                     # UI Screens
│   ├── clsMainScreen.h
│   ├── clsLoginScreen.h
│   ├── clsAddClientScreen.cpp
│   ├── clsClientListScreen.h
│   ├── clsTransactionsScreen.h
│   ├── clsCurrencyMainMenu.h
│   └── ... (more screens for each feature)
│
├── Data/                        # Text file storage
│   ├── Clients.txt
│   ├── Users.txt
│   ├── Currencies.txt
│   ├── TransfersLog.txt
│   ├── LoginRegister.txt
│   └── ...
```

---

## 🚀 How to Run
1. Clone the repository:
   ```bash
   git clone https://github.com/<your-username>/<repo-name>.git
   cd <repo-name>
   ```
2. Open the project in your IDE (e.g., **Visual Studio / Code::Blocks / CLion**).
3. Build and run `main.cpp`.
4. Login with a user from `Users.txt` or create a new one.

---

## 📂 Data Storage
- **Clients.txt** → Stores all client accounts and balances.  
- **Users.txt** → Stores application users for login.  
- **Currencies.txt** → Stores currency codes and exchange rates.  
- **TransfersLog.txt** → Logs all money transfers between clients.  
- **LoginRegister.txt** → Logs all login attempts and user activities.  

---

## 🧑‍💻 Concepts Applied
- Object-Oriented Programming (**OOP**)  
- File handling (Read/Write text files)  
- Encapsulation & Abstraction  
- Inheritance & Polymorphism  
- Layered screen-based architecture  

---

## 📌 Future Improvements
- Replace file storage with a database (**SQL Server / SQLite**)  
- GUI interface (Qt / WinForms / Web) instead of console  
