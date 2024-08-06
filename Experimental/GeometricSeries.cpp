//#include <iostream>
//#include <cmath>
//using namespace std;
//
//struct GeometricSeries
//{
//	double firstTerm;
//	double ratio;
//};
//
//double calculateSum(GeometricSeries* series, int term);
//
//int main()
//{
//	int nthTerm;
//	GeometricSeries gm;
//
//	cout << "Please enter the first term, nth term and ratio to calculate geometric sum: " << endl;
//	cin >> gm.firstTerm >> nthTerm >> gm.ratio;
//
//	cout << "Geometric SUM = " << calculateSum(&gm, nthTerm) << endl;
//
//	system("pause");
//	return 0;
//}
//
//double calculateSum(GeometricSeries* series, int term)
//{
//	double geoSum;
//	geoSum = series->firstTerm * (1 - pow(series->ratio, term)) / (1 - series->ratio);
//	return geoSum;
//}
//
////           This programme is missing recursion which can be solved like this: 
//
////double calculateSum(GeometricSeries* series, int term) {
////	if (term == 1) {
////		return series->firstTerm;
////	}
////	else {
////		return pow(series->ratio, term - 1) * series->firstTerm + calculateSum(series, term - 1);
////	}
////}