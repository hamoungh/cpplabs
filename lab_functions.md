note: you will submit the result of the lab to bb at the end. 

- assume the following formula for calculating the vertical position of an object when it's thrown with some initial speed subject to gravity of the Earth:
`y=-0.5gt^2+vt` where g=9.8, t represents time, v is initial velicity, and y is vertical position. 

- create a value returning function for this formula that calculates the position of an object at time `t` when the the object is thrown vertically upward with initial velocity `v`. here's the function signature: `double positionUnderGravity(double v,double t)`. put this function above main.

- Call your function with different values and check if the result matches the ones obtained from a calculator.
- make g a  global constant 
- add the prototype of this function above main()  and move  the actual function below main(). 

- now call function with the following values t=0, t=0.1, t=0.2 ...., t=4 using a for loop and with the value v=20 for initial speed. 

- add the following header to file:
`#include <windows.h>`
also add the following void function to your program:
```cpp
void gotoxy( int x, int y )
{
    COORD p = { x, 100-y };
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), p );
}
```
this function enables us to print a character at the specified position on console window.

- call the gotoxy(...) function to print the phrase " hello" at position (5,5). 

- use the function gotoxy(....)  to draw the path of an object from t=0 to t=4 when its thrown with some initial speed 20. 
hint:
```cpp
		double loc=positionUnderGravity(20,t);
		gotoxy(i++,loc); 
		cout<<"o";
```
- convert the value returning function `positionUnderGravity(...)` to a void function.  add an argument called `position` to the function. uuse this argument to pass the return value to the caller funtion. modify the main program accordingly.

- send the value `t` to the function `positionUnderGravity(...)` using a global variable. (this is a bad practive but I just wanted you to try it.). you can change it back once you try this. 

Additional parts (not mandatory)
=============
- create a function `positionUnderCircularMotion(t)` that returns two values `x`,`y` through 'passing by reference'. 
use the formulas:
x=20+10*cos(t)
y=20+10*sin(t); 
to calculate x and y.

- test the function by passing the following to the function
```code
void circle(int numVertices){
	double t=0;
	for(int i=0;i<numVertices; i++){
		 t+=2*3.14/numVertices;
		gotoxy(20+10*cos(t),20+10*sin(t)); 
		cout<<"o";
	}
}

