#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	stack <int> st;
	cin>>s;
	
	//while(cin >> s) {
		if(s == "+" || s == "-" || s == "/" || s == "*") {
			signed int sc = st.top(); st.pop();
			signed int ft = st.top(); st.pop();
			if(s == "+") st.push(ft+sc);
			if(s == "-") st.push(ft-sc);
			if(s == "*") st.push(ft*sc);
			if(s == "/") st.push(ft/sc);
		} else {
			st.push(stoi(s));
		}
	//}
	cout << st.top() << '\n';
}
