#include <iostream>
using namespace std;

int main()
{
	char character, asmallASCI, zsmallASCI, AsmallASCI, ZsmallASCI;
	char digit0, digit9;
	char comma, dot, semiColon, singleinvertedComma, doubleinvertedComma;
	char plus, minus, asterisk, forwardslash, caret, ampersand, lessThan, greaterThan, equal;

	cout << "Enter any character you like: ";
	cin >> character;

	asmallASCI = static_cast<int>(97);
	zsmallASCI = static_cast<int>(122);

	AsmallASCI = static_cast<int>(65);
	ZsmallASCI = static_cast<int>(90);

	digit0 = static_cast<int>(48);
	digit9 = static_cast<int>(57);

	comma = static_cast<int>(44);
	dot = static_cast<int>(46);
	semiColon = static_cast<int>(59);
	singleinvertedComma = static_cast<int>(39);
	doubleinvertedComma = static_cast<int>(34);

	plus = static_cast<int>(43);
	minus = static_cast<int>(45);
	asterisk = static_cast<int>(42);
	forwardslash = static_cast<int>(47);
	caret = static_cast<int>(94);
	ampersand = static_cast<int>(38);
	lessThan = static_cast<int>(60);
	greaterThan = static_cast<int>(62);
	equal = static_cast<int>(61);


	if (character >= asmallASCI && character <= zsmallASCI)
	{
		cout << "Character class: Small Alphabet \nCharacter class code: 301 \n";
	}
	else if (character >= AsmallASCI && character <= ZsmallASCI)
	{
		cout << "Character class: Capital Alphabet \nCharacter class code: 302 \n";
	}
	else if (character >= digit0 && character <= digit9)
	{
		cout << "Character class: Digit \nCharacter class code: 303 \n";
	}
	else if (character == comma || character == dot || character == semiColon || character == singleinvertedComma || character == doubleinvertedComma)
	{
		cout << "Character class: Punctuation \nCharacter class code: 304 \n";
	}
	else if (character == plus || character == minus || character == asterisk || character == forwardslash || character == caret || character == ampersand || character == lessThan || character == greaterThan || character == equal)
	{
		cout << "Character class: Operator \nCharcter class code: 305 \n";
	}
	else
	{
		cout << "Character class: Special \nCharacter class code: 306 \n";
	}


	system("pause");
	return 0;
}