# Command-Line Calculator
#### Video Demo:  <https://youtu.be/T40g7dTInHE?si=F3VzE2hth5guSlVX>
#### Description:
A simple command-line calculator written in C that performs basic arithmetic operations like addition, subtraction, multiplication, and division. It’s designed to run entirely in the terminal using user input and displays results in real time. The project demonstrates structured programming, modular functions, and proper error handling as part of my CS50 final project.

---

## Command-Line Calculator

This project is my final submission for **CS50x**, and it’s a simple yet functional **command-line calculator** written in the C programming language. It’s designed to perform basic arithmetic operations—addition, subtraction, multiplication, and division—directly in the terminal. While the program itself is small, it represents a complete understanding of fundamental programming concepts like functions, conditionals, user input, loops, and error handling.

The calculator doesn’t rely on any graphical interface or external libraries beyond CS50’s own library and the standard C headers. It runs entirely from the command line, accepting input from the user and displaying results in real time. The purpose of this project is to demonstrate how structured programming and clear function design can produce a practical, easy-to-understand tool.

---

## Motivation and Concept

The idea behind this project is simple: create something that feels tangible and useful while reinforcing the skills I learned throughout the CS50 course. I wanted to pick a project that doesn’t depend on frameworks or advanced libraries but still showcases a full workflow—planning, implementation, testing, and presentation.

A calculator is one of the most classic beginner projects, but building one from scratch in C gives you a deeper appreciation for low-level control, type handling, and user input management. Unlike web-based projects, this one runs entirely in the terminal, emphasizing logic and structure over interface design. It’s also a great way to demonstrate the use of modular code by separating each operation (add, subtract, multiply, divide) into its own function.

---

## Features

- **Interactive Menu** – Users can choose an operation by entering a number corresponding to addition, subtraction, multiplication, or division.
- **Input Validation** – The program handles invalid inputs gracefully, such as dividing by zero or choosing an invalid operation.
- **Readable Output** – Results are displayed clearly, formatted to two decimal places for simplicity.
- **Structured Code** – Each arithmetic operation has its own function, keeping the main logic organized and easy to extend later.

Even though the project is small, I made a point to follow clean code practices—using meaningful variable names, consistent indentation, and concise function design. This not only makes the program easier to read but also much easier to debug and expand.

---

## How It Works

When you run the program, it first displays a menu of available operations:

Simple Command-Line Calculator
Available operations:

Add

Subtract

Multiply

Divide
Select operation (1-4):

sql
Copy code

The user selects an operation by entering a number from 1 to 4.
After that, the program prompts for two floating-point numbers (using `get_float` from the CS50 library).

Once both numbers are entered, the calculator performs the operation and prints the result. For example:

Enter first number: 5
Enter second number: 2
Result: 2.50

vbnet
Copy code

If the user tries to divide by zero, the program displays an error message instead of crashing:

Error: Cannot divide by zero.

yaml
Copy code

Finally, after showing the result, the program terminates gracefully.

---

## Code Structure

The code is divided into five main functions:

1. `add()` – Returns the sum of two numbers.
2. `subtract()` – Returns the difference between two numbers.
3. `multiply()` – Returns the product of two numbers.
4. `divide()` – Returns the quotient of two numbers, with error handling for division by zero.
5. `main()` – The entry point that manages input, displays the menu, and calls the appropriate function.

Each function takes two `float` values and returns the computed result. This modular design makes it easy to add new operations later, such as modulus, exponentiation, or square roots, without cluttering the main logic.

---

## How to Compile and Run

1. Open the **CS50 IDE** (https://cs50.dev) or your terminal.
2. Create a new file called `calculator.c` and paste the code inside.
3. In the terminal, compile the program:
   ```bash
   make calculator
Then run it:

bash
Copy code
./calculator
Follow the on-screen instructions to perform calculations.

Example Usage
markdown
Copy code
$ ./calculator
Simple Command-Line Calculator
------------------------------
Available operations:
1. Add
2. Subtract
3. Multiply
4. Divide
Select operation (1-4): 3
Enter first number: 12
Enter second number: 3
Result: 36.00
Challenges Faced
The main challenge was managing input validation and making sure the program didn’t crash due to user mistakes.
For instance, dividing by zero or entering an invalid menu option initially caused problems. I solved this by adding conditional checks before performing any division and by validating the user’s choice through a simple switch structure.

Another small challenge was formatting the output neatly. Using printf with the correct format specifiers (%.2f) keeps the display consistent and readable.

Lessons Learned
This project reinforced several key lessons:

How to break a problem into smaller functions.

How to use switch statements for clean branching.

How to handle user input safely with the CS50 library.

How to think through possible errors and handle them gracefully.

It also reminded me that simplicity can still be powerful. You don’t need thousands of lines of code to show clear understanding and good design—clarity matters more than complexity.

Future Improvements
Here are a few ideas I’d like to explore if I continue developing this project:

Add support for more operations (modulus, power, square root).

Allow chained calculations (perform another operation without restarting the program).

Let users type full expressions like 3 + 5 * 2.

Save a history of calculations to a file.

Conclusion
The Command-Line Calculator might be small, but it captures the essence of what CS50 teaches: solving problems by combining logic, structure, and clarity. Every part of the program is intentional—each line contributes to making it functional, understandable, and extendable.

It’s a solid final project because it demonstrates that I can take a problem, design a clean solution, implement it in C, and present it in a way that’s clear and easy for others to use or build upon.
