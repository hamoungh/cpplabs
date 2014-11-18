in this lab we are going to implement the tic-tac-toe game

you need to submit the result at the end of lab to the blackboard

- first define a global three by tree two-dimensional character array to store the state of the game
each cell in the array can take three values space character, X character,  O character

- create a method called initialize_game that sets all elements of the matrix to space character

- create a method called draw() that will draw the game state in the terminal using simple 'cout <<' 

-  create a method called 'char isThereAWinner()' their returns either O or X or space character (iin case there is no winner). The method should check the three rows (you can do this using it for loop that iterates through the rows), and three columns ( again you can do this using a for loop that a iterates over the columns) ,
and two diagonals. 

- test 'isThereAWinner'

- write a method called 'get_player_move' that is going to read the coordinates of the cell that the user wants to place checkmark. Inside the method check if the specified ccell is empty or not using the below conditions:
''' 
  if(matrix[x][y]!= ' '){
    printf("Invalid move, try again.\n");
    get_player_move();
  }
''''

- we need to define how the computer is going to play. We can pick every dummy logic and check the first available empty cell on the board. Write a method called 'get_computer_move(void)' that will search the first available empty cell and puts a O character there.


- Use the following main method to test your code:
int main(void)
{
  char done;

  printf("This is the game of Tic Tac Toe.\n");
  printf("You will be playing against the computer.\n");

  done =  ' ';
  initialize_game();

  do {
    draw();
    get_player_move();
    done = isThereAWinner(); /* see if winner */
    if(done!= ' ') break; /* winner!*/
    get_computer_move();
    done = isThereAWinner(); /* see if winner */
  } while(done== ' ');

  if(done=='X') printf("You won!\n");
  else printf("I won!!!!\n");
  draw(); /* show final positions */

  return 0;
}

