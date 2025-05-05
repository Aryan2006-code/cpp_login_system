# C++ Login System

A simple **console-based user authentication system** built using C++. It supports **user registration, login, and password recovery**, with user data stored in a text file.

---

## Features

- User Registration (Name, Password, Email, Phone)
- User Login with credential verification
- Forgot Password functionality
- File-based data storage (`store.txt`)
- Clean, class-based modular code

---

## How It Works

User data is stored in the format:
- name*password*email*phone

On login or password recovery, the program scans the file line-by-line and matches credentials.

---

## File Structure
├── login.cpp # Source code
├── store.txt # User data file (auto-created)
└── README.md # Project info
  
---

## Getting Started

### Prerequisites

- C++ Compiler (e.g., g++)

### Compile & Run

```bash
g++ login.cpp -o login_app
./login_app
```
---
## Sample Usage

### Registration

-------------------Register-------------------
Enter your name:
John
Enter your password:
pass123
Enter your email:
john@example.com
Enter your phone number:
1234567890
Registration successful!

### Login

-------------------Login-------------------
Enter your name:
John
Enter your password:
pass123
Login successfully!!

### Forgot Password

-------------------Forgot password-------------------
Enter your name:
John
Enter your email:
john@example.com
Your password is: pass123


## Future Scope

Add password encryption for security

Connect to a web frontend using C++ frameworks like Crow

Replace text file with database (e.g., SQLite or MySQL)


## Author
Aryan Kumar Prajapati
LinkedIn | GFG | HackerRank | LeetCode 

## License
This project is open-source and free to use for educational purposes.

