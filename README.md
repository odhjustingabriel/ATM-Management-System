# ATM-Management-System
Simple ATM Management System

We start by declaring and initializing the variables option (to store the user's choice), balance (to store the user's account balance), and amount (to store the amount of money to be withdrawn or deposited).
We then display the available options to the user using printf statements and a while loop that keeps running until the user chooses to exit the program.
Inside the while loop, we use a switch statement to perform the appropriate action based on the user's choice.
If the user chooses to withdraw money, we prompt them to enter the amount to withdraw and check if their balance is sufficient. If it is, we subtract the withdrawn amount from their balance and display the new balance. Otherwise, we inform them that their balance is insufficient.
If the user chooses to deposit money, we prompt them to enter the amount to deposit and add it to their balance. We then display the new balance.
If the user chooses to check their balance, we display their current balance.
If the user chooses to exit the program, we display a goodbye message and return 0 to indicate successful program termination.
If the user enters an invalid choice, we inform them of this and the program continues running.
