1. assume the following formula for calculating the position of an object when it's thrown with some initial speed subject to gravity of the Earth:
`=-0.5gt^2+vt`

create a value returning function that calculates the position of an object at time `t` when the the object is thrown vertically upward with initial velocity `v`.

2.Call your function with different values and check if the result matches the ones obtained from a calculator.

3. now call function with the following values for the 0, 0.1, 0.2 .... 4 for time (t) and the value 20 for initial speed (v) using a for loop. 

4. add the following header to file:
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

call the gotoxy(...) function to print the phrase  " hello" at position (5,5). 


