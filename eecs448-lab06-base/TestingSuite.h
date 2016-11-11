#ifndef TESTING_SUITE
#define TESTING_SUITE

#include <iostream>
#include <vector>
#include "LinkedListOfInts.h"

class TestingSuite {
public:
	/**
	 * @pre None.
	 * @post A testing suite object is created
	 */
	TestingSuite();

	/**
 	 * @pre None
 	 * @post None.
 	 * @return True if tests for isEmpty() (and sort of addFront) work, false otherwise.
	 */
 	bool test1();

 	/**
 	 * @pre None
 	 * @post None.
 	 * @return True if tests for size() work, false otherwise.
	 */
 	bool test2();

	/**
 	 * @pre None
 	 * @post None.
 	 * @return True if tests for search() work, false otherwise.
	 */
	bool test3();

	/**
 	 * @pre None
 	 * @post None.
 	 * @return True if tests for addBack() work, false otherwise.
	 */
	bool test4();

	/**
 	 * @pre None
 	 * @post None.
 	 * @return True if tests for addFront() work, false otherwise.
	 */
	bool test5();

	/**
 	 * @pre None
 	 * @post None.
 	 * @return True if tests for removeBack() work, false otherwise.
	 */
	bool test6();

	/**
 	 * @pre None
 	 * @post None.
 	 * @return True if tests for removeFront() work, false otherwise.
	 */
	bool test7();

 	/**
 	 * @pre None.
 	 * @post All tests are called.
	 */
	void runTests();

private:
	bool m_emptyPassed;
	bool m_sizePassed;
	bool m_searchPassed;
	bool m_addBackPassed;
	bool m_addFrontPassed;
	bool m_removeBackPassed;
	bool m_removeFrontPassed;
};

#endif