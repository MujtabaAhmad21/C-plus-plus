#include <iostream>
#include <cstring>
using namespace std;


string ScrambleWord(string str, string word);

int main() {

    string str = "National University of Computer and emerging Sciences";

    string word = "Computer";

    cout << ScrambleWord(str, word);

    return 0;
}


string ScrambleWord(string str, string word) {

    int pos = -1;
    //Check if the word exists in the string, if it does find its position
    for (int i = 0; str[i] != '\0'; i++) {
        bool found = false;
        if (str[i] == word[0]) {
            found = true;

            for (int j = 0; word[j] != '\0'; j++) {
                if (str[i + j] != word[j]) {
                    found = false;
                    break;

                }
                if (found) {
                    pos = i;
                    break;

                }

            }

        }
    }

    if (pos != -1) {

        //Scramble the word in ascending order


         //length of word, Could take it as a parameter to the function
        int N = 8;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N - 1 - i; j++)
                if (word[j] > word[j + 1])
                {
                    char temp = word[j];
                    word[j] = word[j + 1];
                    word[j + 1] = temp;
                }
        }
        //Put the word in the string
        for (int i = pos; word[i - pos] != '\0'; i++) {
            str[i] = word[i - pos];
        }

    }

    return str;
}