in this lab we are going to implement the tic-tac-toe game

you need to submit the result at the end of lab to the blackboard

- first define a global three by tree two-dimensional character array to store the state of the game
each cell in the array can take three values space character, X character,  O character

- create a method called initialize_game that sets all elements of the matrix to space character

- create a method called draw() that will draw the game state in the terminal using simple 'cout <<' 

-  create a method called 'char isThereAWinner()' their returns either O or X or space character (iin case there is no winner).
The method should check the three rows (you can do this using it for loop that iterates through the rows), and three columns ( again you can do this using a for loop that a iterates over the columns) ,
and two diagonals. 

