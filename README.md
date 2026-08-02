![Simple Tic Tac Toe Game In C++](./Simple_Tic_Tac_Toe_Game_In_C++.png)

A terminal-based, two-player tic-tac-toe game built in C++, focused on practicing core language fundamentals — functions, 2D vectors, pass-by-reference, control flow, and a complete game loop with input validation and win/draw detection.

![Tic Tac Toe gameplay](https://media4.giphy.com/media/v1.Y2lkPTc5MGI3NjExa2wzeHhqc2d0aHV6MHByc2tqOXlxOGU3bG8zOGM3eGd0YXIzNWVwMSZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/YnZPEeeC7q6pQEZw1I/giphy.gif)

## How to build
+ `g++ -std=c++17 -Wall -Wextra -Werror src/main.cpp -o tictactoe`

## How to run
+ `./tictactoe`
   
**Useage**
---
```
When prompted for a row or column, use the coordinates below (0-2):

 (0,0) | (0,1) | (0,2)
-------+-------+-------
 (1,0) | (1,1) | (1,2)
-------+-------+-------
 (2,0) | (2,1) | (2,2)

Example of the game: 
Hello, tic-tac-toe!

Player 1 choose between X or O: 
X
Player 1 makes a move: 
Enter row:0
Enter column:0
 X |   |  
---+---+---
   |   |  
---+---+---
   |   |  
Player 2 makes a move:
Enter row:1
Enter column:0
 X |   |  
---+---+---
 O |   |  
---+---+---
   |   |  
Player 1 makes a move: 
Enter row:0
Enter column:1
 X | X |  
---+---+---
 O |   |  
---+---+---
   |   |  
Player 2 makes a move:
Enter row:1
Enter column:1
 X | X |  
---+---+---
 O | O |  
---+---+---
   |   |  
Player 1 makes a move: 
Enter row:0
Enter column:2
 X | X | X 
---+---+---
 O | O |  
---+---+---
   |   |  
Player1 Wins!
```

