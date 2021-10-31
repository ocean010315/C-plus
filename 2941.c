#include <iostream>
#include <string>

using namespace std;

int main() {
	string f[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	string c;
	cin >> c;
	
	for (int i = 0; i < 8; i++) {
		while (c.find(f[i]) != string::npos) {
			c.replace(c.find(f[i]), f[i].length(), "!");
		}
	}
	
	cout << c.length();
}
