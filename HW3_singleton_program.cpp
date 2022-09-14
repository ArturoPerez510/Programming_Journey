// counts the number of "singleton" occurrences (a data element that is not repeated immediately before or after itself)

// the user inputs a word, program will terminate once the word "xxxxx" appears


#include <iostream>
using namespace std;

string prev_word = "xxxxx";
string next_word = "";
string word = "";
int n = 0;

int main()
{
    {
        while (word != "xxxxx")
        {
	    cin >> next_word;
	    if (word != prev_word && word != next_word)
	    {
	    n ++;
	    }
	    prev_word = word;
	    word = next_word;
        }
        cout << "Number of singleton occurrences: " << n << endl;
    }
    return 0;
}