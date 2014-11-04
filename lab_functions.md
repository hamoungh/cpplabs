note1: you will submit the result of the lab to bb at the end. 

- assume the following formula for calculating the vertical position of an object when it's thrown with some initial speed subject to gravity of the Earth:
`y=-0.5gt^2+vt` where g=9.8, t represents time, v is initial velicity, and y is vertical position. 

- create a value returning function for this formula that calculates the position of an object at time `t` when the the object is thrown vertically upward with initial velocity `v`. here's the function signature:
- `double positionUnderGravity(double v,double t)`. put this function above main.

- Call your function with different values and check if the result matches the ones obtained from a calculator.
- make g a  global constant 
- add the prototype of this function above main()  and move  the actual function below main(). 

- now call function with the following values `t=0`, `t=0.1`, `t=0.2`, `....`, `t=4` using a for loop and with the value v=20 for initial speed. 
basically you place the function call inside the for loop. just print the returned value. 

Making it visual
===============
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
if including `windows.h` gives you an error, try visual studio 2013.

- call the gotoxy(...) function to print the phrase " hello" at position (5,5). 

- use the function gotoxy(....)  to draw the path of an object from t=0 to t=4 when its thrown with some initial speed 20. 
hint:
```cpp
	for(......){
		double loc=positionUnderGravity(20,t);
		gotoxy(i++,loc); 
		cout<<"o";
	}
```
- cut/paste  the above code into a separate void function called `void ballPath()` and call `ballPath()` in the `main()`.
- convert the value returning function `positionUnderGravity(...)` to a void function.  Add an argument called `position` to the function. use this argument to pass the return value to the caller funtion. modify the main program accordingly.

- send the value `t` to the function `positionUnderGravity(...)` using a global variable. (this is a bad practice but I just want you to try it. you can change it back once you try it. )

Additional parts (not mandatory)
=============
- create a function `void positionUnderCircularMotion(double t,double& x,double& y)` that returns two values `x`,`y` through 'passing by reference'. 
use the formulas:
```
x=20+10*cos(t);
y=20+10*sin(t); 
```
to calculate x and y. 
note that the argument to sin() and cos() represents an angle and is expressed in radians.
One radian is equivalent to 180/PI degrees. 

- test your function with some values
- create a void function called `circle` (i.e. `void circle()`) that generates 100 angles between `0` and `2*Pi` using the formula
`t = 2 * 3.13 *i / 100;`
pass these `t` values to `positionUnderCircularMotion` and draw the result. 

