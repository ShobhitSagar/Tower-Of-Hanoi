# Tower-Of-Hanoi

Tower of Hanoi is a mathematical puzzle where we have three rods and n disks.

---

The objective of the puzzle is to move the entire stack to another rod,  
<b>
obeying the following simple rules:
</b>
* Only one disk can be moved at a time.

* Each move consists of taking the upper disk from one of the stacks  
  and placing it on top of another stack i.e. a disk can only be moved  
  if it is the uppermost disk on a stack.
  
* No disk may be placed on top of a smaller disk.

---


## OUTPUT

```
Enter the number of disks 
4
The sequence of moves involved in when there are 4 disks: 
Move disk 1 from A to B 
Move disk 2 from A to C 
Move disk 1 from B to C 
Move disk 3 from A to B 
Move disk 1 from C to A 
Move disk 2 from C to B 
Move disk 1 from A to B 
Move disk 4 from A to C 
Move disk 1 from B to C 
Move disk 2 from B to A 
Move disk 1 from C to A 
Move disk 3 from B to C 
Move disk 1 from A to B 
Move disk 2 from A to C 
Move disk 1 from B to C 
Program ended with exit code: 0
```


> Remember that this code is written in Xcode. If you run this in Turbo C++ you need to add `#include<conio.h>` , `clrscr();` and `getch();` in your code.
