#include <iostream>
using namespace std;

int cnt = 0;
string goose = "goose";
string duck = "duck";
string x = "duck";

int main()
{
    {
while (x == "duck")
	{
        cout << "This program counts the number of occurrences for the word duck" << endl;
        cout << "It will terminate when the word goose is entered" << endl;
        cout << "Please enter the word, duck: "; 
		cin >> x;
		if (x == "duck")
		{
			cnt ++;
		}
		else if (x == "goose")
		{}
	}
cout << "Number of occurences for duck: " << cnt << endl;
}
return 0;
}