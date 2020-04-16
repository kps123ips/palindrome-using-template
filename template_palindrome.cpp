#include <iostream>
#include <string>
#include <vector>

using namespace std;
ostream & operator<<(ostream &, vector<int> &);
template<typename Bidirectional>
bool isPalindrome(Bidirectional first,Bidirectional last)
{
	while(true)
	{
		last--;
		if(*first==*last)
		break;
		if(first!=last)
		return false;
		first++;
		if(first==last)
		break;
	}
	return true;
}


int main()
{
	string word;
	cout<<"Enter Word";
	cin>>word;  
	vector<int> number;
	for (int i = 0; i < 10; i++)
		number.push_back(i);
	for (int j = 9; j >= 0; j--)
		number.push_back(j);
	if (isPalindrome(word.begin(), word.end()))
		cout << word << " is a palindrome.\n";
	else
		cout << word << " is not a palindrome.\n";
	if (isPalindrome(number.begin(), number.end()))
		cout << number << " is a palindrome.";
	else
		cout << number << " is not a palindrome.";
	cin.get();
	return 0;
}
ostream & operator<<(ostream & stream, vector<int> & vec)
{
	for(int i = 0; i < vec.size(); i++)
		cout << vec[i];
	return stream;
}
