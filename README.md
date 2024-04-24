# # CISC2200 Spring 2024 Lab7 HashStringSet 

In this lab assignment, we practice implementing a set of string for **HashTable**.  

## Download starter code

From your terminal (mac or WSL/Ubunto) window, you can use the following command to download it:
```
git clone https://github.com/CISC2200-Spring2024/lab7_hash.git
```
Alternatively, you can use the following command to download the starter code as a zip file:
```
wget https://github.com/CISC2200-Spring2024/lab7_hash/archive/refs/heads/main.zip
```

and then unzip it (if it's not automatically unzipped): 
```
unzip main.zip
```

## Programming Environment Setup
If you haven't done so already, please set up programming environment our our own computer, by following [Setup Tutorial](https://eecs280staff.github.io/tutorials/). 

- The _Commannd Line Tools_ are required. 

- The _C++ Dev Environment_ (VSCode) is highly recommened.

**Please follow these tutorials closely and carefully.**

## Requirements:

Please implement the following member functions in the **StringHashSet.h**. 

1.  Implement **hash_code** static member function that calcuates hash code of a string using the asciiToInt function (given in slides). Note that please make it return **unsigned int** type.
2.  Implement **clear** member function that resets the string set to be empty.
3.  Implement **put** member function that adds a new string to the set.
4.  Implement **find** member function that checks if a given string is in the set or not.
5.  Implement **remove** member function that removes a string from the set. 
6.  Test your functions by adding more testcases in  **main.cpp**.
7.  (Optional) You can extend the class to have a configurable parameter **maxLoadFactor**, if the current load factor (N/M) is greater than this **maxLoadFactor**, call **refactor** member function, which you write to double the size of the table (i.e., M), and move each of the existing string element (using hash_code modulo the new table size to calcualte its index) to the new table; and then delete the old table. 
    


## Submission 

Submit your **StringHashSet.h** file at the following link by 4/30, Tuesday, midnight (11:59pm).

[Lab7 submission link ](https://storm.cis.fordham.edu:8443/web/project/1771)
