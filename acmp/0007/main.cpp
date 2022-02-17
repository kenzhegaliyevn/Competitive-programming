#include <iostream>
#include <string>


using namespace std;

string a, b, c;

string compare(string s, string t){
	if (s.size() > t.size())
		return s;
	if (t.size() > s.size())
		return t;
	for (int i = 0; i < s.size(); i++)
		if (s[i] > t[i])
			return s;
		if (t[i] > s[i])
			return t;
	return s;
}

int main(){
	cin >> a >> b >> c;
	cout << compare(a, compare(b, c)) << '\n';
}
