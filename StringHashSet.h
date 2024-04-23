#ifndef __STRINGHASH_H_
#define __STRINGHASH_H_

#include <iostream>
#include <ostream>
#include <sstream>
#include <string>
#include <cmath>
#include <cstddef>
#include <ostream>
#include <forward_list> 

using namespace std;


class StringHashSet {

private:
  forward_list<string> * H; // points to hash table, which is an array of list of string 
  int M; //current size of hash table
  int N; //current number of elements in hash table 


  /* Return the index/hash code of the given word, using the asciiToInt function
     given in the slide */
  unsigned int hash_code (const string & word) const {
	//Todo:
  }


public:
  StringHashSet (int init_m=10)
  {
	H = new forward_list<string> [init_m];  // initilaize of bucket of given size (int_m)
        M = init_m;
        N = 0;
  }

  ~StringHashSet() {
	delete [] H;
  }

  /** Delete all elements 
   Hint: use forward_list's clear() method to delete all elements in each of the singly linked lists
         reset N 
   */
  void clear() {
     //Todo:
  }

  
  /**
   * Print the Hash Table 
   */
  void print() {
     //Display the number of bucket count
     // for each bucket:
     //    display the length of the linked list
     //    display the strings stored in the list 
	cout <<"Number of buckets:" <<M<<endl;
	cout <<"Number of elements:" <<N<<endl;

	for (int i=0;i<M;i++){
		//display i-th bucket
		cout <<"Bucket " << i <<"stores:";
		for (auto s:H[i])
			cout <<s<<",";
		cout <<endl;
	}

  }

  /**
   * Insert a string into the set 
   * @param val The string to be inserted 
   */
  void put(const string &val) {
    //Todo:
    // 0. if the val is already in the set, do nothing
    // 1. calcualte hash_code of val
    // 2. the hash_code % Bucket Count ==> index
    // 3. Use index to find the SLList to which val should be added 
  }

  /**
   * Search for given string
   *
   * @param sk The search key
   * @return true if `sk` is in the BSTMap
   */
  bool find(const string &sk) const 
  { 
	//Todo:
  }

  /** 
   * remove rk from the set 
   * You ucan assume rk is in the set
   * @param rk the string to be deleted 
   */
  void remove(const string &rk) {
	//Todo:
	//1. calculate the bucket that rk is stored into 
	//2. Use the remove() member function of forward_list to remove rk 
  }
};

#endif
