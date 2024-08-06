//#include "Q6.h"
//#include <iostream>
//#include <string>
//using namespace std;
//
//TestScores::TestScores()
//{
//	cout << "How many Test Scores you want to add? ";
//	cin >> noOfTestScores;
//	testScore = new int[noOfTestScores];
//}
//
//TestScores::TestScores(TestScores& T)          // doing the same thing as in the constructor
//{                                              // because when calling copy constructor the
//	noOfTestScores = T.noOfTestScores;         // the default constructor is not called. So, 
//	testScore = new int[noOfTestScores];       // the dynamic memory has to be made here.
//	for (int z = 0; z < noOfTestScores; z++)
//	{
//		testScore[z] = T.testScore[z];
//	}
//}
//
//TestScores::~TestScores()
//{
//	cout << "I am a destructor." << endl;
//	delete[] testScore;       // deallocate the dynamic memory.
//}
//
//void TestScores::setTestScores()     // setting scores from user input.
//{
//	cout << "Enter numbers for " << noOfTestScores << " Test Scores: " << endl;
//	for (int i = 0; i < noOfTestScores; i++)
//	{
//		cout << "Test Score " << i + 1 << " = ";
//		cin >> testScore[i];
//	}
//}
//
//int* TestScores::getTestScores()
//{
//	return testScore;
//}
//
//int TestScores::averageScores()       //  average function logic.
//{
//	int sum = 0;
//	int average;
//	for (int x = 0; x < noOfTestScores; x++)
//	{
//		sum += testScore[x];
//	}
//	average = sum / noOfTestScores;
//	return average;
//}
//
//void TestScores::displayTestScores()
//{
//
//	for (int p = 0; p < noOfTestScores; p++)
//	{
//		cout << "Test Score " << p + 1 << " = " << testScore[p];
//	}
//	cout << endl;
//}