/**
*	@author 
*	@date 
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "TestingSuite.h"

int main(int argc, char** argv)
{
	//Example of declaring a LinkedListOfInts
	//LinkedListOfInts testableList;

	//You won't do all the tests in main; that's what your Test class will be for
	//Example:
	TestingSuite myTester;
	myTester.runTests();

	std::cout << "\n\nAnd we're done.\nGoodbye.\n";
	
	return (0);

}

