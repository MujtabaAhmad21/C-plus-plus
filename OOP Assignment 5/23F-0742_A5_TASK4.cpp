#include<iostream>
using namespace std;
const int MAX_SIZE = 100;
struct Term
{
	int coefficient;
	int exponent;
};
class Polynomial
{
	Term terms[MAX_SIZE];
	int numTerms;
public:
	Polynomial()
	{
		numTerms = 0;
	}
	~Polynomial()
	{
		cout << "Destructor is called " << endl;
	}
	void setTerm(int index, int coefficient, int exponent)
	{
		if (index >= 0 && index < MAX_SIZE)
		{
			terms[index].coefficient = coefficient;
			terms[index].exponent = exponent;
			if (index >= numTerms) {
				numTerms = index + 1;
			}
		}
	}
	int getCoefficient(int index)
	{
		if (index >= 0 && index < numTerms)
		{
			return terms[index].coefficient;
		}
	}
	int getExponent(int index)
	{
		if (index >= 0 && index < numTerms)
		{
			return terms[index].exponent;
		}
	}
	int getNumTerms()
	{
		return numTerms;
	}
	Polynomial operator+(Polynomial obj)
	{
		Polynomial result;
		int i = 0, j = 0, k = 0;
		while (i < numTerms && j < obj.numTerms)
		{
			if (terms[i].exponent > obj.terms[j].exponent)
			{
				result.terms[k++] = terms[i++];
			}
			else if (terms[i].exponent < obj.terms[j].exponent)
			{
				result.terms[k++] = obj.terms[j++];
			}
			else
			{
				result.terms[k].exponent = terms[i].exponent;
				result.terms[k++].coefficient = terms[i++].coefficient + obj.terms[j++].coefficient;
			}
		}
		while (i < numTerms)
		{
			result.terms[k++] = terms[i++];
		}

		while (j < obj.numTerms)
		{
			result.terms[k++] = obj.terms[j++];
		}

		result.numTerms = k;
		return result;
	}
	Polynomial operator-(Polynomial obj)
	{
		Polynomial result;
		int i = 0, j = 0, k = 0;
		while (i < numTerms && j < obj.numTerms)
		{
			if (terms[i].exponent > obj.terms[j].exponent)
			{
				result.terms[k++] = terms[i++];
			}
			else if (terms[i].exponent < obj.terms[j].exponent)
			{
				result.terms[k++] = obj.terms[j++];
			}
			else
			{
				result.terms[k].exponent = terms[i].exponent;
				result.terms[k++].coefficient = terms[i++].coefficient - obj.terms[j++].coefficient;
			}
		}
		while (i < numTerms)
		{
			result.terms[k++] = terms[i++];
		}

		while (j < obj.numTerms)
		{
			result.terms[k++] = obj.terms[j++];
		}

		result.numTerms = k;
		return result;
	}
	Polynomial operator*(Polynomial p)
	{
		Polynomial result;
		for (int i = 0; i < numTerms; ++i)
		{
			for (int j = 0; j < p.numTerms; ++j)
			{
				int coefficient, exponent;
				coefficient = terms[i].coefficient * p.terms[j].coefficient;
				exponent = terms[i].exponent + p.terms[j].exponent;
				bool found = false;
				for (int k = 0; k < result.numTerms; ++k)
				{
					if (result.terms[k].exponent == exponent)
					{
						result.terms[k].coefficient += coefficient;
						found = true;
						break;
					}
				}
				if (!found)
				{
					result.terms[result.numTerms].coefficient = coefficient;
					result.terms[result.numTerms].exponent = exponent;
					++result.numTerms;
				}
			}
		}

		return result;
	}
	Polynomial& operator=(Polynomial obj)
	{
		if (this != &obj)
		{
			numTerms = obj.numTerms;
			for (int i = 0; i < numTerms; ++i)
			{
				terms[i] = obj.terms[i];
			}
		}
		return *this;
	}
	Polynomial& operator+=(const Polynomial& obj)
	{
		for (int i = 0; i < obj.numTerms; ++i)
		{
			int j;
			for (j = 0; j < numTerms; ++j)
			{
				if (terms[j].exponent == obj.terms[i].exponent)
				{
					terms[j].coefficient += obj.terms[i].coefficient;
					break;
				}
			}
			if (j == numTerms)
			{
				terms[numTerms].coefficient = obj.terms[i].coefficient;
				terms[numTerms].exponent = obj.terms[i].exponent;
				++numTerms;
			}
		}
		return *this;
	}
	Polynomial& operator-=(const Polynomial& obj)
	{
		for (int i = 0; i < obj.numTerms; ++i)
		{
			int j;
			for (j = 0; j < numTerms; ++j)
			{
				if (terms[j].exponent == obj.terms[i].exponent)
				{
					terms[j].coefficient -= obj.terms[i].coefficient;
					break;
				}
			}
			if (j == numTerms)
			{
				terms[numTerms].coefficient = -obj.terms[i].coefficient;
				terms[numTerms].exponent = obj.terms[i].exponent;
				++numTerms;
			}
		}
		return *this;
	}
	Polynomial& operator*=(const Polynomial& p)
	{
		Polynomial result;
		for (int i = 0; i < numTerms; ++i)
		{
			for (int j = 0; j < p.numTerms; ++j)
			{
				int coefficient, exponent;
				coefficient = terms[i].coefficient * p.terms[j].coefficient;
				exponent = terms[i].exponent + p.terms[j].exponent;
				bool found = false;
				for (int k = 0; k < result.numTerms; ++k)
				{
					if (result.terms[k].exponent == exponent)
					{
						result.terms[k].coefficient += coefficient;
						found = true;
						break;
					}
				}
				if (!found)
				{
					result.terms[result.numTerms].coefficient = coefficient;
					result.terms[result.numTerms].exponent = exponent;
					++result.numTerms;
				}
			}
		}
		*this = result;
		return *this;
	}
	void display()
	{

		for (int i = 0; i < numTerms; ++i)
		{
			cout << terms[i].coefficient << "x^" << terms[i].exponent;
			if (i < numTerms - 1)
			{
				cout << " + ";
			}
		}
		cout << endl;
	}
};
int main() {
	Polynomial p1, p2, p3;

	p1.setTerm(0, 1, 2);
	p1.setTerm(1, 4, 5);
	p1.setTerm(2, 2, 1);

	p2.setTerm(0, 2, 1);
	p2.setTerm(1, 0, 0);
	p2.setTerm(2, 1, 0);

	cout << "p1: ";
	p1.display();

	cout << "p2: ";
	p2.display();

	p3 = p1 + p2;
	cout << "p1 + p2: ";
	p3.display();

	p3 = p1 - p2;
	cout << "p1 - p2: ";
	p3.display();

	p3 = p1 * p2;
	cout << "p1 * p2: ";
	p3.display();

	system("pause");
	return 0;
}