This tutorial is about rewriting the astroid example using  structs and two-dimensional arrays 
and adding some features such as different astroid shapes and (if there is enough time, collision detection).

note: on the computers of c401 you need to use Visual Studio 2013 in order for this tutorial to work fine.
if it tells you that the license is expired use your dreamspark username password tto sign in, and is will let you use it. 

You need to submit your code to the blackboard at the end of the lab.

-include the following header files:
#include <cmath>
#include <iostream>
#include <string>
#include<conio.h>
#include <Windows.h>
#include <ctime>

-import the namespace std;

-in this tutorial the asteroids will be arranged in a grid format. let ussassume there are 10 rows and 10 columns
of astroids. 
Define global constants ROWS and COLUMNS (storing number of rows/columns of asteroids) and assign
the value 10 to each of one. 

-declare two float variables xVal and yVal to store the co-ordinates of the spacecraft. set the initial coordinate to (5,5)

-declare a struct astroid. 

-the struct should have the following fields:
	float centerX, centerY storing the location of each astroid
	int radius storing the radius of the astroid

-add a method to the struct called void initialize(float x, float y, float r) that will set the struct members 
to the passed parameters. 

-add the following definition to your program:
void gotoxy( int x, int y )
{
	COORD p = { x+40, 100-y };
	SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), p );
}

-write a method called 'void draw()'  that uses calls 'gotoxy(centerX,centerY);' and then draws an astroid 
using the following statements (the shape of the astroid will change based on its radius):
		switch(radius){
		case 0:cout << ' '; break; 
		case 1:couht << '.'; break; 
		case 2:cout << 'o'; break; 
		case 3:cout << 'O'; break; 
		}
	}

-declare a two-dimensional global array of asteroids:
 asteroid arrayAsteroids[ROWS][COLUMNS];


-add a function called 'void setup()' that initializes the global array of astroids using a nested for loop.
inside the nested for loop use the following statement:
	arrayAsteroids[i][j].initialize( 3*(-COLUMNS/2 + j),  i,  rand()%4);
	
note that the radius of each astroid is also a randomized number between/including zero and three.

-add the drawing routine called 'void drawScene(char playerCh)' that uses a nested for loop
to printa astroid by calling its draw method only if its radius is more than zero.
 the method should then print the spaceship using:
	gotoxy(xVal,yVal);   
	cout << playerCh;


-add the following Keyboard input processing routine.
void keyInputf(unsigned char key)
{
	switch(key)
	{
	case 'w':yVal++;  break;
	case 'a':xVal--;  break;
	case 's':yVal--;    break;
	case 'd':xVal++;       break;
	case 27:exit(0);break;
	default:
		break;
	}

}

-the main function is pretty much like the other astroid tutorial:
void main()
{
	char ch=0;
	setup(); 
	do
	{
		drawScene('+');  
		ch = _getch(); 
		drawScene(' '); 
		keyInputf(ch); 

	}while (ch != 'Q' && ch!='q'); 
}
