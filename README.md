# Semi-Infinite Turing Machine
C++ Semi-Infinite Turing Machine with non-stationary moviment.

#### Prerequisites:
* g++

#### To Compile:
```console
$ make
```

# Tests:
In the "*in*" file:
* The **first line** represents the **input string**.
* The **other lines** represent the **movements**.

### About the movements:
Formated as **```<origin> <read> <write> <direction> <destiny>```**
* Only reads and writes **single chars**
* The empty cell is '**_**'
* Directions are: '**r**'(right) or '**l**'(left)
* The initial state is **0**
* The acceptance state is **the one with the biggest id**

#### Example:
##### **Replaces all 0's to x and all 1's to y*
```txt
1111110011

0 0 x r 0
0 1 y r 0
0 _ _ r 1
```

### To run the test:
```console
$ ./main < in
```
