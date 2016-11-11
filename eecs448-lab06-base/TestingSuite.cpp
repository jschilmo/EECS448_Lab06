#include "TestingSuite.h"

TestingSuite::TestingSuite(){
	m_emptyPassed = true;
	m_sizePassed = true;
	m_searchPassed = true;
	m_addBackPassed = true;
	m_addFrontPassed = true;
	m_removeBackPassed = true;
	m_removeFrontPassed = true;
}

bool TestingSuite::test1() {
	LinkedListOfInts testList;
	//check isEmpty on empty list
	if(testList.isEmpty()){
		//std::cout << "isEmpty works on empty list.\n";
	}else{
		//std::cout << "isEmpty does not work on empty list.\n";
		m_emptyPassed = false;
	}
	//use addFront
	testList.addFront(1);
	std::vector<int> tempVec = testList.toVector();
	//test to see if addFront worked
	if(tempVec.front() == 1){
		//std::cout << "addFront adds an element to an empty list.\n";
		//test if isEmpty works
		if(!(testList.isEmpty())){
			//std::cout << "isEmpty works on a list of size 1.\n";
		}else{
			//std::cout << "isEmpty does not work on a list of size 1.\n";
			m_emptyPassed = false;
		}
	}else{
		//std::cout << "addFront does not add an element to an empty list.\n";
		m_addFrontPassed = false;
	}
	//use addFront a second time
	testList.addFront(2); 
	tempVec = testList.toVector();
	//test to see if addFront still works
	if(tempVec.front() == 2){
		//std::cout << "addFront adds an element to the front of a non-empty list.\n";
		//test if isEmpty works
		if(!(testList.isEmpty())){
			//std::cout << "isEmpty works on a list of size more than 1.\n";
			m_emptyPassed = true;
		}else{
			//std::cout << "isEmpty does not work on a list of size more than 1.\n";
			m_emptyPassed = false;
		}
	}else{
		m_addFrontPassed = false;
		//std::cout << "addFront does not work on a non-empty list.\n";
	}
	return m_emptyPassed;
}

bool TestingSuite::test2() {
	LinkedListOfInts testList;

	if(testList.size() == 0){
		//std::cout << "size works for an empty list.\n";
	}else{
		m_sizePassed = false;
		//std::cout << "size does not work for an empty list.\n";
	}

	testList.addFront(1);
	if(testList.size() == 1){
		//std::cout << "size works for a list of size 1.\n";
	}else{
		m_sizePassed = false;
		//std::cout << "size does not work for a list of size 1.\n";
	}
	return m_sizePassed;
}

bool TestingSuite::test3() {
	LinkedListOfInts testList;

	if(testList.search(1)){
		m_searchPassed = false;
		//std::cout << "search does not work on an empty list.\n";
	}else{
		//std::cout << "search works on an empty list.\n";
	}

	testList.addFront(1);
	if(testList.search(1)){
		//std::cout << "search works on a list containing only one instance of the element searched for.\n";
	}else{
		m_searchPassed = false;
		//std::cout << "search does not work on a list containing only one instance of the element searched for.\n";
	}

	testList.addFront(2);
	if(testList.search(1)){
		//std::cout << "search works on a list containing one instance of the element searched for.\n";
	}else{
		m_searchPassed = false;
		//std::cout << "search does not work on a list containing one instance of the element searched for.\n";
	}

	testList.addFront(1);
	if(testList.search(1)){
		//std::cout << "search works on a list containing multiple instances of the element searched for.\n";
	}else{
		m_searchPassed = false;
		//std::cout << "search does not work on a list containing multiple instances of the element searched for.\n";
	}
	return m_searchPassed;
}

bool TestingSuite::test4() {
	LinkedListOfInts testList;

	testList.addBack(1);
	std::vector<int> tempVec = testList.toVector();
	if(tempVec.back() == 1){
		//std::cout << "addBack works on an empty list.\n";
	}else{
		m_addBackPassed = false;
		//std::cout << "addBack does not work on an empty list.\n";
	}

	testList.addBack(2);
	tempVec = testList.toVector();
	if(tempVec.back() == 2){
		//std::cout << "addBack works on a non-empty list.\n";
	}else{
		m_addBackPassed = false;
		//std::cout << "addBack does not work on a non-empty list.\n";
	}
	return m_addBackPassed;
}

bool TestingSuite::test5() {
	//tested in test 1
	return m_addFrontPassed;
}

bool TestingSuite::test6() {
	LinkedListOfInts testList;
	std::vector<int> tempVec = testList.toVector();

	if(testList.removeBack()){
		//std::cout << "removeBack does not work on an empty list.\n";
		m_removeBackPassed = false;
	}else{
		//std::cout << "removeBack works on an empty list.\n";
	}

	testList.addFront(1);
	if(testList.removeBack()){
		//std::cout << "removeBack works on a list of size 1.\n";
	}else{
		//std::cout << "removeBack does not work on a list of size 1.\n";
		m_removeBackPassed = false;
	}

	testList.addFront(1);
	testList.addFront(2);
	if(testList.removeBack()){
		tempVec = testList.toVector();
		if(tempVec.front() == 2){
			//std::cout << "removeBack works on a list of size more than 1.\n";
		}
	}else{
		//std::cout << "removeBack does not work on a list of size more than 1.\n";
		m_removeBackPassed = false;
	}
	return m_removeBackPassed;
}

bool TestingSuite::test7() {
	LinkedListOfInts testList;
	std::vector<int> tempVec = testList.toVector();

	if(testList.removeFront()){
		//std::cout << "removeFront does not work on an empty list.\n";
		m_removeFrontPassed = false;
	}else{
		//std::cout << "removeFront works on an empty list.\n";
	}

	testList.addFront(1);
	if(testList.removeFront()){
		//std::cout << "removeFront works on a list of size 1.\n";
	}else{
		//std::cout << "removeFront does not work on a list of size 1.\n";
		m_removeFrontPassed = false;
	}

	testList.addFront(1);
	testList.addFront(2);
	if(testList.removeFront()){
		tempVec = testList.toVector();
		if(tempVec.front() == 1){
			//std::cout << "removeFront works on a list of size more than 1.\n";
		}
	}else{
		//std::cout << "removeFront does not work on a list of size more than 1.\n";
		m_removeFrontPassed = false;
	}
	return m_removeFrontPassed;
}

void TestingSuite::runTests() {
	std::cout << "Testing...\n\n";
	if(test1())
		std::cout << "isEmpty works!\n";
	else
		std::cout << "isEmpty failed!\n";
	if(test2())
		std::cout << "size works!\n";
	else
		std::cout << "size failed!\n";
	if(test3())
		std::cout << "search works!\n";
	else
		std::cout << "search failed!\n";
	if(test4())
		std::cout << "addBack works!\n";
	else
		std::cout << "addBack failed!\n";
	if(test5())
		std::cout << "addFront works!\n";
	else
		std::cout << "addFront failed!\n";
	if(test6())
		std::cout << "removeBack works!\n";
	else
		std::cout << "removeBack failed!\n";
	if(test7())
		std::cout << "removeFront works!\n";
	else
		std::cout << "removeFront failed!\n";
}